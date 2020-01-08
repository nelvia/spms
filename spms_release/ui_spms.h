/********************************************************************************
** Form generated from reading UI file 'spms.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPMS_H
#define UI_SPMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spms
{
public:
    QWidget *centralWidget;
    QPushButton *btnExit;
    QLabel *lblInformation;
    QPushButton *showVidBtn;
    QLabel *lblVideo;
    QLabel *lblRoom;
    QComboBox *comboBoxRoom;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QProgressBar *progressBar;
    QLabel *label_4;
    QProgressBar *progressBarSharp;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *spms)
    {
        if (spms->objectName().isEmpty())
            spms->setObjectName(QStringLiteral("spms"));
        spms->resize(500, 701);
        centralWidget = new QWidget(spms);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnExit = new QPushButton(centralWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(270, 560, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        btnExit->setFont(font);
        lblInformation = new QLabel(centralWidget);
        lblInformation->setObjectName(QStringLiteral("lblInformation"));
        lblInformation->setGeometry(QRect(20, 350, 461, 201));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        lblInformation->setFont(font1);
        lblInformation->setAutoFillBackground(false);
        lblInformation->setFrameShape(QFrame::Panel);
        lblInformation->setFrameShadow(QFrame::Sunken);
        lblInformation->setLineWidth(2);
        showVidBtn = new QPushButton(centralWidget);
        showVidBtn->setObjectName(QStringLiteral("showVidBtn"));
        showVidBtn->setGeometry(QRect(160, 560, 101, 31));
        showVidBtn->setAutoFillBackground(true);
        lblVideo = new QLabel(centralWidget);
        lblVideo->setObjectName(QStringLiteral("lblVideo"));
        lblVideo->setGeometry(QRect(20, 40, 460, 261));
        lblVideo->setFont(font1);
        lblVideo->setAutoFillBackground(false);
        lblVideo->setFrameShape(QFrame::Panel);
        lblVideo->setFrameShadow(QFrame::Sunken);
        lblVideo->setLineWidth(2);
        lblRoom = new QLabel(centralWidget);
        lblRoom->setObjectName(QStringLiteral("lblRoom"));
        lblRoom->setGeometry(QRect(170, 10, 41, 21));
        lblRoom->setFont(font);
        comboBoxRoom = new QComboBox(centralWidget);
        comboBoxRoom->setObjectName(QStringLiteral("comboBoxRoom"));
        comboBoxRoom->setGeometry(QRect(210, 10, 121, 21));
        comboBoxRoom->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 620, 101, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 620, 31, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 320, 121, 21));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(170, 320, 71, 20));
        progressBar->setMaximumSize(QSize(16777215, 16777215));
        progressBar->setValue(0);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 320, 121, 21));
        progressBarSharp = new QProgressBar(centralWidget);
        progressBarSharp->setObjectName(QStringLiteral("progressBarSharp"));
        progressBarSharp->setGeometry(QRect(370, 320, 71, 20));
        progressBarSharp->setMaximumSize(QSize(16777215, 16777215));
        progressBarSharp->setValue(0);
        spms->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(spms);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 22));
        spms->setMenuBar(menuBar);
        mainToolBar = new QToolBar(spms);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        spms->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(spms);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        spms->setStatusBar(statusBar);

        retranslateUi(spms);

        QMetaObject::connectSlotsByName(spms);
    } // setupUi

    void retranslateUi(QMainWindow *spms)
    {
        spms->setWindowTitle(QApplication::translate("spms", "spms", Q_NULLPTR));
        btnExit->setText(QString());
        lblInformation->setText(QString());
        showVidBtn->setText(QString());
        lblVideo->setText(QString());
        lblRoom->setText(QApplication::translate("spms", "Room:", Q_NULLPTR));
        comboBoxRoom->setCurrentText(QString());
        label->setText(QApplication::translate("spms", "Start Evaluation", Q_NULLPTR));
        label_2->setText(QApplication::translate("spms", "Exit", Q_NULLPTR));
        label_3->setText(QApplication::translate("spms", "Current Brightness: ", Q_NULLPTR));
        label_4->setText(QApplication::translate("spms", "Current Sharpness: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class spms: public Ui_spms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPMS_H
