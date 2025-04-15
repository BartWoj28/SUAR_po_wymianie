QT       += core gui network
QT += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Generator.cpp \
    ModelARX.cpp \
    ModelDialog.cpp \
    RegulatorPID.cpp \
    SprzezenieZwrotne.cpp \
    UkladRegulacji.cpp \
    dialogconnection.cpp \
    main.cpp \
    mainwindow.cpp \
    tcpclient.cpp \
    tcpserver.cpp

HEADERS += \
    Generator.h \
    ModelARX.h \
    ModelDialog.h \
    RegulatorPID.h \
    SprzezenieZwrotne.h \
    UkladRegulacji.h \
    dialogconnection.h \
    mainwindow.h \
    tcpclient.h \
    tcpserver.h

FORMS += \
    ModelDialog.ui \
    dialogconnection.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
