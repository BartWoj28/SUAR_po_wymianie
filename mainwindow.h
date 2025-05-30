#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#pragma once

#include <QComboBox>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTimer>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include "ModelDialog.h"
#include "UkladRegulacji.h"
#include "dialogconnection.h"
#include "tcpclient.h"
#include "tcpserver.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_startButton_clicked();
    void on_stopButton_clicked();
    void on_resetButton_clicked();
    void on_wznowButton_clicked();
    void on_signalTypeComboBox_currentIndexChanged(int index);
    void aktualizujSymulacje();
    void on_spinBoxK_editingFinished();
    void on_spinBoxTi_editingFinished();
    void on_spinBoxTd_editingFinished();
    void on_spinBoxAmplituda_editingFinished();
    void on_spinBoxOkres_editingFinished();
    void on_spinBoxWypelnienie_editingFinished();
    void on_spinBoxInterwal_editingFinished();
    void saveConfiguration();
    void loadConfiguration();
    void on_pushButtonARX_clicked();
    void on_pushButtonResetCalka_clicked();
    void on_comboBoxSposobCalkowania_currentIndexChanged(int index);

    void on_btnRozlacz_clicked();
    void on_btnPolaczenie_clicked();

    void slot_clientConnected(QString adr);
    void slot_clientDisconnected();

    void slot_connected(QString adr, int port);
    void slot_disconnected();

    void slot_msgReceived(QString msg);
    void slot_newMsg(QString msg);

private:
    int krok = 0;
    Ui::MainWindow *ui;
    UkladRegulacji *uklad;
    QTimer *timer;
    TypSygnalu typSygnalu;

    QVector<double> wspAstart = {0.0, 0.0, 0.0};
    QVector<double> wspBstart = {0.0, 0.0, 0.0};
    int opoznienieStart = 1;
    double zaklocenieStart = 0.0;

    bool zaklocenieWlaczone = false;
    double poziomZaklocenia = 0.0;

    QChart *chart;
    QChartView *chartView;
    QLineSeries *series;
    QLineSeries *seriesSetpoint;
    QValueAxis *axisX;
    QValueAxis *axisY;

    QChart *chartPID;
    QChartView *chartViewPID;
    QLineSeries *seriesP;
    QLineSeries *seriesI;
    QLineSeries *seriesD;
    QValueAxis *axisXPID;
    QValueAxis *axisYPID;

    QChart *chartUchyb;
    QChartView *chartViewUchyb;
    QLineSeries *seriesUchyb;
    QValueAxis *axisXUchyb;
    QValueAxis *axisYUchyb;

    bool networking = false;

    TCPClient *m_klient = new TCPClient;
    TCPServer *m_serwer = new TCPServer;
    DialogConnection *dialogPolacz;

    void ResetKlient();
    void ResetSerwer();

    double wartość_ARX = 0;
    bool wyrabia = true;
    tryb_sieciowy tryb = tryb_sieciowy::lokalny;
    bool klient_działa = false;
    bool m_init=false;
signals:
};
#endif // MAINWINDOW_H
