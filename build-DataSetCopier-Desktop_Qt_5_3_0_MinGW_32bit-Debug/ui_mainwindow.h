/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *payloadSelection;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *IP_Box;
    QListWidget *dataSetWidget;
    QPushButton *copyButton;
    QLabel *label_4;
    QPushButton *connectButton;
    QToolButton *destFolderSelection;
    QLineEdit *destDirBox;
    QLabel *folderName;
    QPushButton *deleteButton;
    QCheckBox *mergeButton;
    QLabel *status;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(388, 388);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(388, 388));
        MainWindow->setMaximumSize(QSize(388, 388));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MyFiles/C:/Users/rmacneille.ALTAVIAN.001/Desktop/favicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(70);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(388, 388));
        centralWidget->setMaximumSize(QSize(338, 388));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        centralWidget->setPalette(palette);
        centralWidget->setAutoFillBackground(true);
        payloadSelection = new QComboBox(centralWidget);
        payloadSelection->setObjectName(QStringLiteral("payloadSelection"));
        payloadSelection->setGeometry(QRect(20, 30, 71, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 10, 121, 16));
        IP_Box = new QLineEdit(centralWidget);
        IP_Box->setObjectName(QStringLiteral("IP_Box"));
        IP_Box->setGeometry(QRect(130, 30, 131, 21));
        dataSetWidget = new QListWidget(centralWidget);
        dataSetWidget->setObjectName(QStringLiteral("dataSetWidget"));
        dataSetWidget->setGeometry(QRect(20, 80, 351, 201));
        dataSetWidget->setAcceptDrops(false);
        dataSetWidget->setLineWidth(0);
        dataSetWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        dataSetWidget->setModelColumn(0);
        dataSetWidget->setUniformItemSizes(false);
        copyButton = new QPushButton(centralWidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));
        copyButton->setGeometry(QRect(290, 330, 81, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(copyButton->sizePolicy().hasHeightForWidth());
        copyButton->setSizePolicy(sizePolicy1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 60, 61, 16));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(290, 20, 81, 41));
        connectButton->setAutoDefault(false);
        connectButton->setDefault(false);
        connectButton->setFlat(false);
        destFolderSelection = new QToolButton(centralWidget);
        destFolderSelection->setObjectName(QStringLiteral("destFolderSelection"));
        destFolderSelection->setGeometry(QRect(180, 340, 31, 21));
        destDirBox = new QLineEdit(centralWidget);
        destDirBox->setObjectName(QStringLiteral("destDirBox"));
        destDirBox->setGeometry(QRect(20, 340, 151, 21));
        folderName = new QLabel(centralWidget);
        folderName->setObjectName(QStringLiteral("folderName"));
        folderName->setGeometry(QRect(20, 320, 111, 16));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(160, 290, 71, 23));
        mergeButton = new QCheckBox(centralWidget);
        mergeButton->setObjectName(QStringLiteral("mergeButton"));
        mergeButton->setGeometry(QRect(230, 340, 70, 21));
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(130, 61, 131, 20));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(255, 63, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
        status->setPalette(palette1);
        status->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(payloadSelection, IP_Box);
        QWidget::setTabOrder(IP_Box, connectButton);
        QWidget::setTabOrder(connectButton, dataSetWidget);
        QWidget::setTabOrder(dataSetWidget, deleteButton);
        QWidget::setTabOrder(deleteButton, destDirBox);
        QWidget::setTabOrder(destDirBox, destFolderSelection);
        QWidget::setTabOrder(destFolderSelection, mergeButton);
        QWidget::setTabOrder(mergeButton, copyButton);

        retranslateUi(MainWindow);

        dataSetWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Data Set Copier", 0));
        payloadSelection->clear();
        payloadSelection->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Standard", 0)
         << QApplication::translate("MainWindow", "Test", 0)
         << QApplication::translate("MainWindow", "Metric", 0)
         << QApplication::translate("MainWindow", "Hybrid", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "Payload Type:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Override IP (Optional):", 0));
        copyButton->setText(QApplication::translate("MainWindow", "Copy", 0));
        label_4->setText(QApplication::translate("MainWindow", "Data Sets:", 0));
#ifndef QT_NO_TOOLTIP
        connectButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        connectButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        connectButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        connectButton->setText(QApplication::translate("MainWindow", "Connect", 0));
        connectButton->setShortcut(QString());
        destFolderSelection->setText(QApplication::translate("MainWindow", "...", 0));
        destDirBox->setText(QApplication::translate("MainWindow", "//NAS/DATA/INBOX", 0));
        folderName->setText(QApplication::translate("MainWindow", "Destination Directory:", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        mergeButton->setText(QApplication::translate("MainWindow", " Merge", 0));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
