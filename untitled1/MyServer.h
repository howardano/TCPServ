#ifndef MYSERVER_H
#define MYSERVER_H

#include <QWidget>
#include <QTcpServer>

class QTcpServer;
class QTextEdit;
class QTcpSocket;

class MyServer : public QWidget {
Q_OBJECT
private:
    QTcpServer* m_ptcpServer;
    QTextEdit*  m_ptxt;
    quint16     m_nNextBlockSize;

private:


public:
    MyServer(int nPort, QWidget* pwgt = 0);

    void sendToClient(QTcpSocket* pSocket, const QString& str);

public slots:
    virtual void slotNewConnection();
            void slotReadClient   ();
};

#endif // MYSERVER_H
