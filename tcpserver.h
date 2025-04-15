#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class TCPServer : public QObject
{
    Q_OBJECT
public:
    explicit TCPServer(QObject *parent = nullptr);
    bool startNasluch(int port);
    bool czyNasluch() { return m_czyNasluch; }
    void stopNasluch();

signals:
    void ClientConnected(QString adr);
    void ClientDisconnected();

private slots:
    void slot_connect_client();
    void slot_client_disconnetcted();

private:

    bool m_czyNasluch = false;
    int m_port = 12345;
    QTcpServer m_serwer;
    QTcpSocket * m_klient;
};

#endif // MYTCPSERVER_H
