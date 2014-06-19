#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QObject>
#include <QtCore/qobjectdefs.h>
#include <QThread>
#include <QDir>
#include "thirdparty/qtfilecopier.h"
#include "thirdparty/qtcopydialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT   


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:

    QtFileCopier* copier;
    QtCopyDialog* dialog;

    virtual void keyPressEvent(QKeyEvent * event);

    void setupCopier();
    void cleanUpCopier();

private slots:

    void on_connectButton_clicked();

    void on_copyButton_clicked();

    void on_destFolderSelection_clicked();

    void on_deleteButton_clicked();

    void on_payloadSelection_currentIndexChanged(int index);

public slots:

    void readResult();

    void copyFolderFancy(QString sourceFolder, QString destFolder)
    {

        copier->copyDirectory(sourceFolder, destFolder);

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
