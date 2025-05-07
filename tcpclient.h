#ifndef MYTCPCLIENT_H
#define MYTCPCLIENT_H

#include <QObject>
#include <QTcpSocket>

class TCPClient : public QObject
{
    Q_OBJECT
public:
    explicit TCPClient(QObject *parent = nullptr);
    void Polacz(QString address, int port);
    void Rozlacz();
    bool czyPolaczone() { return m_socket.isOpen(); }
    void Wyślij(QString wartość);

signals:
    void connected(QString adr, int port);
    void disconnected();
    void Otrzymano(QString wartość);

private slots:
    void slot_connected();
    void slot_GotowyOdczyt();

private:
    QTcpSocket m_socket;
    QString m_ipAddress = "127.0.0.1";
    int m_port = 12345;
};

#endif // MYTCPCLIENT_H
