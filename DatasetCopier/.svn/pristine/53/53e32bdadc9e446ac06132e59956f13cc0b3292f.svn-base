#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QDebug"
#include <QKeyEvent>
#include "QDir"
#include "QMessageBox"
#include <QProcess>
#include <QByteArray>
#include <QShortcut>
#include <QtAlgorithms>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->IP_Box->setText("192.168.4.101");
    ui->status->setAlignment(Qt::AlignHCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui->folderName->setText("////NAS//Data//INBOX");
}

void MainWindow::on_payloadSelection_currentIndexChanged(int)
{
    ui->dataSetWidget->clear();
    ui->connectButton->setText("Connect");
    ui->mergeButton->setChecked(0);
    ui->destDirBox->setText("//NAS/DATA/INBOX");
    ui->status->clear();

    if (ui->payloadSelection->currentText() == "Standard") {
        QString IP = "192.168.4.101";
        ui->IP_Box->setText(IP);

        qDebug() << "Standard Payload Chosen";

    } else {

        if (ui->payloadSelection->currentText() == "Metric") {
            QString IP = "192.168.4.20";
            ui->IP_Box->setText(IP);

            qDebug() << "Metric Payload Chosen";

        } else {

            if (ui->payloadSelection->currentText() == "Hybrid") {
                QString IP = "192.168.4.21";
                ui->IP_Box->setText(IP);

                qDebug() << "Hybrid Payload Chosen";

            } else {

                if (ui->payloadSelection->currentText() == "Test") {
                    QString IP = "192.168.4.6";
                    ui->IP_Box->setText(IP);

                    qDebug() << "Test Payload Chosen";

                }
            }
        }
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    const int key = event->key();


    if (key == Qt::Key_Escape) {

        qDebug() << "Window Cleared";
        ui->status->clear();
        ui->dataSetWidget->clear();
        ui->connectButton->setText("Connect");
        ui->mergeButton->setChecked(0);
        ui->destDirBox->setText("//NAS/DATA/INBOX");
    }
}

void MainWindow::readResult()
{
    QProcess *ping = qobject_cast<QProcess *>(sender());

    if (!ping)
        return;

    QString res = ping->readAllStandardOutput();

    if (!res.contains('%'))
        return;

    if ( res.contains(QRegExp("bytes=32")) ) {
        qDebug() << "Payload Online";
        ui->connectButton->setText("Disconnect");
        ui->status->clear();
        ui->status->setText("Connected");

        // Get Folder List
        QDir dataFolders(QDir::fromNativeSeparators("//" + ui->IP_Box->text() + "/Data/Test"));
        QFileInfoList data(dataFolders.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot, QDir::Name | QDir::IgnoreCase));

        foreach (QFileInfo fi, data){
            ui->status->setText("Counting Images...");
            // Count Files in Each Folder
            QDir subDir(fi.absoluteFilePath());
            QFileInfoList subDirList(subDir.entryInfoList(QDir::Files | QDir::NoDotAndDotDot));
            QString num = QString::number(subDirList.count());
            QListWidgetItem *item = new QListWidgetItem(fi.fileName() + "        " + "                -                " + "         (Files: " + num + ")");
            item->setData(Qt::UserRole + 1, fi.fileName());
            ui->dataSetWidget->addItem(item);
            ui->connectButton->setEnabled(true);
            QCoreApplication::processEvents();

        }

    } else {

        qDebug() << "Can't connect to Payload";
        ui->status->setText(" Connection Failed");
        //ui->errorBox->setText(res);
        ui->connectButton->setText("Connect");
        ui->connectButton->setEnabled(true);
        QMessageBox::critical(this,"Connection Failed", res, "Ok");

    }
    qDebug() << "Folders Displayed";
    ui->status->clear();
}


void MainWindow::on_connectButton_clicked()
{
    if (ui->connectButton->text() == "Connect") {

        qDebug() << "Trying to connect to " + ui->IP_Box->text();
        ui->status->setText("Connecting...");
        ui->connectButton->setText("...");
        ui->connectButton->setEnabled(false);
        QCoreApplication::processEvents();

        QProcess *ping = new QProcess(this);
        connect(ping, SIGNAL(readyReadStandardOutput()), SLOT(readResult()));
        ping->start(QString("ping.exe %1").arg("-n 2 " + ui->IP_Box->text()));
        QCoreApplication::processEvents();

    } else {

        qDebug() << "Disconnected";


        //  ui->errorBox->clear();
        ui->status->clear();
        ui->dataSetWidget->clear();
        ui->connectButton->setText("Connect");
        ui->mergeButton->setChecked(0);
    }
}

void MainWindow::on_copyButton_clicked()

{
    ui->status->setText("Copying... Please Wait");
    QCoreApplication::processEvents();

    if (ui->copyButton->text() == "Copy") {

        if (ui->dataSetWidget->selectedItems().isEmpty()) {

            QMessageBox::information(this,"No Folders Selected", "Please select a folder to copy", "Ok");

        } else {

            ui->copyButton->setText("Cancel");

            if (ui->mergeButton->isChecked()) {
                const QString rootPath = "//" + ui->IP_Box->text() + "/Data/Test/";
                QList<QListWidgetItem*> items = ui->dataSetWidget->selectedItems();

                foreach (QListWidgetItem* item, items) {

                    QString fromPath = rootPath + item->data(Qt::UserRole+1).toString();
                    QString toPath = ui->destDirBox->text() + "/" + item->data(Qt::UserRole+1).toString();
                    qDebug() << "Copying " + fromPath + " to " + toPath;
                    copyFolder(fromPath, toPath);
                    QCoreApplication::processEvents();

                    qDebug() << "Copy process started with Merge";
                }

                QMessageBox::information(this,"Copy Complete", "Copy Complete", "Ok");
                ui->copyButton->setText("Copy");

            } else {

                const QString rootPath = "//" + ui->IP_Box->text() + "/Data/Test/";
                QList<QListWidgetItem*> items = ui->dataSetWidget->selectedItems();

                foreach (QListWidgetItem* item, items) {
                    QDir dir(rootPath + item->data(Qt::UserRole+1).toString());
                    QString fromPath = rootPath + item->data(Qt::UserRole+1).toString();
                    QString toPath = ui->destDirBox->text() + "/" + item->data(Qt::UserRole+1).toString();
                    qDebug() << "Copying " + fromPath + " to " + toPath;
                    copyFolder(fromPath, toPath);
                    QCoreApplication::processEvents();

                    if (!dir.exists()) {
                        QMessageBox::critical(this,"Error", "Folder could not be copied.");
                        qDebug() << "Error deleting " << dir;}

                    qDebug() << "Copy process started without Merge";
                }

                QMessageBox::information(this,"Copy Complete", "Copy Complete", "Ok");
                ui->copyButton->setText("Copy");
                ui->status->clear();
            }
        }

    } else {
        qDebug() << "Copy Canceled";
        ui->copyButton->setText("Copy");
    }


}
void MainWindow::on_destFolderSelection_clicked()
{
    qDebug() << "User Prompted for Custom Destination Directory Selection";
    QString foldername=QFileDialog::getExistingDirectory();
    ui->destDirBox->setText(foldername);

    if ( foldername == "") {
        ui->destDirBox->setText("//NAS/DATA/INBOX");
    }

    if (ui->destDirBox->text() == "//NAS/DATA/INBOX") {
        qDebug() << "Destination Directory Not Changed";

    } else {

        qDebug() << "Destination Directory changed to " + foldername;
    }

}

void MainWindow::on_deleteButton_clicked()
{
    if (ui->dataSetWidget->selectedItems().isEmpty()) {
        QMessageBox::information(this,"No Folders Selected", "Please select a folder to delete", "ok");

    } else {

        qDebug() << "User prompted to delete folders";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Delete Data Sets?", "Are you sure you want to delete these folders?",
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply == QMessageBox::Yes)
        {
            const QString rootPath = "\\\\" + ui->IP_Box->text() + "\\Data\\Test\\";
            QList<QListWidgetItem*> items = ui->dataSetWidget->selectedItems();
            foreach (QListWidgetItem* item, items) {
                // QDir dir(rootPath + item->text());
                QString test = (rootPath + item->data(Qt::UserRole+1).toString());
                QDir dir(rootPath + item->data(Qt::UserRole+1).toString());
                dir.removeRecursively();
                if (dir.exists()) {
                    QMessageBox::critical(this,"Error", "Folder could not be removed.");
                    qDebug() << "Error deleting " << test;
                } else {
                    qDebug() << "User Deleted " << test;
                    //  QMessageBox::information(this,"Deleted", "Data Deleted");
                    ui->dataSetWidget->selectedItems();
                    qDeleteAll(ui->dataSetWidget->selectedItems());
                }
            }

        } else {

            qDebug() << "Folders Not Deleted";
        }
    }
}
