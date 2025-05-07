#include "tcpclient.h"

TCPClient::TCPClient(QObject *parent)
    : QObject{parent}
    , m_socket(this)
{
    connect(&m_socket, SIGNAL(connected()), this, SLOT(slot_connected()));
    connect(&m_socket, SIGNAL(disconnected()), this, SIGNAL(disconnected()));
    connect(&m_socket,SIGNAL(readyRead()),this,SLOT(slot_GotowyOdczyt()));
}

void TCPClient::Polacz(QString address, int port)
{
    m_ipAddress = address;
    m_port = port;
    m_socket.connectToHost(m_ipAddress, port);
}

void TCPClient::Rozlacz()
{
    m_socket.close();
}

void TCPClient::slot_connected()
{
    emit connected(m_ipAddress, m_port);
}

void TCPClient::Wyślij(QString wartość){
    QByteArray data=wartość.toUtf8();
    m_socket.write(data);
}

void TCPClient::slot_GotowyOdczyt(){
    auto message=m_socket.readAll();
    emit Otrzymano(message);
}
