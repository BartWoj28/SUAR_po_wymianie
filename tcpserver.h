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
    void Wyślij(QString msg);

signals:
    void ClientConnected(QString adr);
    void ClientDisconnected();
    void NewMsgFrom(QString);

private slots:
    void slot_connect_client();
    void slot_client_disconnetcted();
    void slot_NewMsg();

private:
    bool m_czyNasluch = false;
    int m_port = 12345;
    QTcpServer m_serwer;
    QTcpSocket *m_klient;
};

#endif // MYTCPSERVER_H
