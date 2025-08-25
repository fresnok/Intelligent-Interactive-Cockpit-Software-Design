#include "serialport.h"

serialport::serialport(QObject *parent) : QObject(parent), serialPort(new QSerialPort(this))
{
    connect(serialPort, &QSerialPort::readyRead, this, &serialport::handleReadyRead);
}

serialport::~serialport()
{
    closeSerialPort();
}

void serialport::openSerialPort(const QString &portName, qint32 baudRate)
{
    serialPort->setPortName(portName);
    serialPort->setBaudRate(baudRate);
    if (serialPort->open(QIODevice::ReadWrite))
    {
        qDebug() << "Serial port opened successfully.";
    }
    else
    {
        qDebug() << "Failed to open serial port.";
    }
}

void serialport::closeSerialPort()
{
    if (serialPort->isOpen())
    {
        serialPort->close();
        qDebug() << "Serial port closed.";
    }
}

void serialport::sendData(const QByteArray &data)
{
    if (serialPort->isOpen())
    {
        serialPort->write(data);
        qDebug() << "Data sent:" << data;
    }
}

void serialport::handleReadyRead()
{
    QByteArray data = serialPort->readAll();
    qDebug() << "Data received:" << data;
    emit dataReceived(data);
}
