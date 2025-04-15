#ifndef DIALOGCONNECTION_H
#define DIALOGCONNECTION_H

#include <QDialog>

namespace Ui {
class DialogConnection;
}

class DialogConnection : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConnection(QWidget *parent = nullptr);
    ~DialogConnection();
    QString adres="127.0.0.1";
    int port=12345;
    bool czy_adres=true;
    bool czyPolacz=false;

private slots:


    void on_wybor_currentTextChanged(const QString &arg1);

    void on_DialogConnection_accepted();

    void on_DialogConnection_finished(int result);

private:
    Ui::DialogConnection *ui;


};

#endif // DIALOGCONNECTION_H
