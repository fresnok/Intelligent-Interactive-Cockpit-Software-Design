#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class serialport : public QObject
{
    Q_OBJECT
public:
    explicit serialport(QObject *parent = nullptr);
    ~serialport();

    void openSerialPort(const QString &portName, qint32 baudRate);
    void closeSerialPort();
    void sendData(const QByteArray &data);

signals:
    void dataReceived(const QByteArray &data);

private slots:
    void handleReadyRead();

private:
    QSerialPort *serialPort;
};

#endif // SERIALPORT_H
