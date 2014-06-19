#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QObject>
#include <QtCore/qobjectdefs.h>
#include <QThread>
#include <QDir>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT   


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    void connect();

protected:
    virtual void keyPressEvent(QKeyEvent * event);

private slots:

    void on_connectButton_clicked();

    void on_copyButton_clicked();

    void on_destFolderSelection_clicked();

    void on_deleteButton_clicked();

    void on_payloadSelection_currentIndexChanged(int index);

public slots:

    void readResult();

    void copyFolder(QString sourceFolder, QString destFolder)

    {
        QDir sourceDir(sourceFolder);
        if(!sourceDir.exists())
            return;
        QDir destDir(destFolder);
        if(!destDir.exists())
        {
            destDir.mkdir(destFolder);
        }
        QStringList files = sourceDir.entryList(QDir::Files);
        for(int i = 0; i< files.count(); i++)
        {
            QString srcName = sourceFolder + "/" + files[i];
            QString destName = destFolder + "/" + files[i];
            QFile::copy(srcName, destName);
        }
        files.clear();
        files = sourceDir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
        for(int i = 0; i< files.count(); i++)
        {
            QString srcName = sourceFolder + "/" + files[i];
            QString destName = destFolder + "/" + files[i];
            copyFolder(srcName, destName);
        }
    }

private:
    Ui::MainWindow *ui;
};

class Sleeper : public QThread
{
public:
    static void usleep(unsigned long usecs){QThread::usleep(usecs);}
    static void msleep(unsigned long msecs){QThread::msleep(msecs);}
    static void sleep(unsigned long secs){QThread::sleep(secs);}
};
#endif // MAINWINDOW_H
