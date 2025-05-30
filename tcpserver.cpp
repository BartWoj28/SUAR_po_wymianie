#include "tcpserver.h"

TCPServer::TCPServer(QObject *parent)
    : QObject{parent}
    , m_serwer(this)
{
    connect(&m_serwer, SIGNAL(newConnection()), this, SLOT(slot_connect_client()));
}

bool TCPServer::startNasluch(int port)
{
    m_port = port;
    m_czyNasluch = m_serwer.listen(QHostAddress::Any, port);
    return m_czyNasluch;
}

void TCPServer::stopNasluch()
{
    m_serwer.close();
    m_czyNasluch = false;
}

void TCPServer::slot_connect_client()
{
    QTcpSocket *client = m_serwer.nextPendingConnection();
    m_klient = client;
    auto adr = client->peerAddress();

    connect(client, SIGNAL(disconnected()), this, SLOT(slot_client_disconnetcted()));
    connect(client, SIGNAL(readyRead()), this, SLOT(slot_NewMsg()));
    emit ClientConnected(adr.toString());
}

void TCPServer::slot_client_disconnetcted()
{
    m_klient = nullptr;
    emit ClientDisconnected();
}

void TCPServer::Wyślij(QString msg)
{
    m_klient->write(msg.toUtf8());
}

void TCPServer::slot_NewMsg()
{
    QString msg = m_klient->readAll();
    emit NewMsgFrom(msg);
}
