/********************************************************************************
** Form generated from reading UI file 'ui_deisgner_qtsqlappoGmfbb.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEISGNER_QTSQLAPPOGMFBB_H
#define UI_DEISGNER_QTSQLAPPOGMFBB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "../Interface_Functions/interface_functions.h"
#include "../Interface_Functions/sqlite_funcs.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *customersTab;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLineEdit *inputCustCountry;
    QLineEdit *inputCustCity;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *inputCustStreetAddr;
    QLineEdit *inputCustFirstName;
    QLineEdit *inputCustLastName;
    QLineEdit *inputCustSearch;
    QComboBox *genderComboBox;
    QComboBox *comboBoxOrderHistory;
    QLineEdit *inputCustPostCose;
    QLabel *labelGender;
    QLabel *labelOrderHistory;
    QSpacerItem *verticalSpacer;
    QPushButton *btnCustClear;
    QPushButton *btnCustOk;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLineEdit *inputCustCryptoHist;
    QSpacerItem *horizontalSpacer;
    QTextEdit *texteditCustCryptoHist;
    QWidget *apiTab;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QTextEdit *texteditAPI;
    QLineEdit *inputCoinName;
    QLabel *labelCoinName;
    QPushButton *btnAPIOk;
    QSpacerItem *horizontalSpacer_3;
    QWidget *imProcTab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        customersTab = new QWidget();
        customersTab->setObjectName(QString::fromUtf8("customersTab"));
        horizontalLayout_2 = new QHBoxLayout(customersTab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(customersTab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        inputCustCountry = new QLineEdit(groupBox);
        inputCustCountry->setObjectName(QString::fromUtf8("inputCustCountry"));

        gridLayout_2->addWidget(inputCustCountry, 4, 1, 1, 1);

        inputCustCity = new QLineEdit(groupBox);
        inputCustCity->setObjectName(QString::fromUtf8("inputCustCity"));
        inputCustCity->setReadOnly(false);

        gridLayout_2->addWidget(inputCustCity, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 0, 1, 1);

        inputCustStreetAddr = new QLineEdit(groupBox);
        inputCustStreetAddr->setObjectName(QString::fromUtf8("inputCustStreetAddr"));
        inputCustStreetAddr->setReadOnly(false);

        gridLayout_2->addWidget(inputCustStreetAddr, 3, 0, 1, 1);

        inputCustFirstName = new QLineEdit(groupBox);
        inputCustFirstName->setObjectName(QString::fromUtf8("inputCustFirstName"));
        inputCustFirstName->setReadOnly(false);

        gridLayout_2->addWidget(inputCustFirstName, 2, 0, 1, 1);

        inputCustLastName = new QLineEdit(groupBox);
        inputCustLastName->setObjectName(QString::fromUtf8("inputCustLastName"));
        inputCustLastName->setReadOnly(false);

        gridLayout_2->addWidget(inputCustLastName, 2, 1, 1, 1);

        inputCustSearch = new QLineEdit(groupBox);
        inputCustSearch->setObjectName(QString::fromUtf8("inputCustSearch"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputCustSearch->sizePolicy().hasHeightForWidth());
        inputCustSearch->setSizePolicy(sizePolicy);
        inputCustSearch->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(inputCustSearch, 1, 0, 1, 1);

        genderComboBox = new QComboBox(groupBox);
        genderComboBox->setObjectName(QString::fromUtf8("genderComboBox"));

        gridLayout_2->addWidget(genderComboBox, 5, 1, 1, 1);

        comboBoxOrderHistory = new QComboBox(groupBox);
        comboBoxOrderHistory->setObjectName(QString::fromUtf8("comboBoxOrderHistory"));
        sizePolicy.setHeightForWidth(comboBoxOrderHistory->sizePolicy().hasHeightForWidth());
        comboBoxOrderHistory->setSizePolicy(sizePolicy);
        comboBoxOrderHistory->setMinimumSize(QSize(100, 0));
        comboBoxOrderHistory->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(comboBoxOrderHistory, 7, 1, 1, 1);

        inputCustPostCose = new QLineEdit(groupBox);
        inputCustPostCose->setObjectName(QString::fromUtf8("inputCustPostCose"));

        gridLayout_2->addWidget(inputCustPostCose, 4, 0, 1, 1);

        labelGender = new QLabel(groupBox);
        labelGender->setObjectName(QString::fromUtf8("labelGender"));
        labelGender->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelGender, 5, 0, 1, 1);

        labelOrderHistory = new QLabel(groupBox);
        labelOrderHistory->setObjectName(QString::fromUtf8("labelOrderHistory"));
        labelOrderHistory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelOrderHistory, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);

        btnCustClear = new QPushButton(groupBox);
        btnCustClear->setObjectName(QString::fromUtf8("btnCustClear"));

        gridLayout_2->addWidget(btnCustClear, 9, 0, 1, 1);

        btnCustOk = new QPushButton(groupBox);
        btnCustOk->setObjectName(QString::fromUtf8("btnCustOk"));

        gridLayout_2->addWidget(btnCustOk, 9, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(customersTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inputCustCryptoHist = new QLineEdit(groupBox_3);
        inputCustCryptoHist->setObjectName(QString::fromUtf8("inputCustCryptoHist"));
        inputCustCryptoHist->setReadOnly(true);

        gridLayout->addWidget(inputCustCryptoHist, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        texteditCustCryptoHist = new QTextEdit(groupBox_2);
        texteditCustCryptoHist->setObjectName(QString::fromUtf8("texteditCustCryptoHist"));

        verticalLayout_2->addWidget(texteditCustCryptoHist);


        horizontalLayout_2->addWidget(groupBox_2);

        tabWidget->addTab(customersTab, QString());
        apiTab = new QWidget();
        apiTab->setObjectName(QString::fromUtf8("apiTab"));
        gridLayout_4 = new QGridLayout(apiTab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(apiTab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 0, 1, 1);

        texteditAPI = new QTextEdit(groupBox_4);
        texteditAPI->setObjectName(QString::fromUtf8("texteditAPI"));

        gridLayout_3->addWidget(texteditAPI, 2, 0, 1, 2);

        inputCoinName = new QLineEdit(groupBox_4);
        inputCoinName->setObjectName(QString::fromUtf8("inputCoinName"));

        gridLayout_3->addWidget(inputCoinName, 0, 1, 1, 1);

        labelCoinName = new QLabel(groupBox_4);
        labelCoinName->setObjectName(QString::fromUtf8("labelCoinName"));

        gridLayout_3->addWidget(labelCoinName, 0, 0, 1, 1);

        btnAPIOk = new QPushButton(groupBox_4);
        btnAPIOk->setObjectName(QString::fromUtf8("btnAPIOk"));

        gridLayout_3->addWidget(btnAPIOk, 1, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_4, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        tabWidget->addTab(apiTab, QString());
        imProcTab = new QWidget();
        imProcTab->setObjectName(QString::fromUtf8("imProcTab"));
        tabWidget->addTab(imProcTab, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btnCustOk, &QPushButton::clicked, btnCustOk, interface_functions::test_button_fire);
        QObject::connect(btnCustClear, &QPushButton::clicked, btnCustClear, sqlite_funcs::create_table);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qt C++ Practicing", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Customer Info", nullptr));
        inputCustCountry->setPlaceholderText(QCoreApplication::translate("MainWindow", "Country...", nullptr));
        inputCustCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "City...", nullptr));
        inputCustStreetAddr->setPlaceholderText(QCoreApplication::translate("MainWindow", "Street...", nullptr));
        inputCustFirstName->setPlaceholderText(QCoreApplication::translate("MainWindow", "first name...", nullptr));
        inputCustLastName->setPlaceholderText(QCoreApplication::translate("MainWindow", "last name...", nullptr));
        inputCustSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        genderComboBox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        comboBoxOrderHistory->setPlaceholderText(QCoreApplication::translate("MainWindow", "None", nullptr));
        inputCustPostCose->setPlaceholderText(QCoreApplication::translate("MainWindow", "Postal Code...", nullptr));
        labelGender->setText(QCoreApplication::translate("MainWindow", "Gender:", nullptr));
        labelOrderHistory->setText(QCoreApplication::translate("MainWindow", "Order History", nullptr));
        btnCustClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnCustOk->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Customer Blog", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        inputCustCryptoHist->setPlaceholderText(QCoreApplication::translate("MainWindow", "selected extra info...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(customersTab), QCoreApplication::translate("MainWindow", "Customers", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        inputCoinName->setPlaceholderText(QCoreApplication::translate("MainWindow", "type coin name...", nullptr));
        labelCoinName->setText(QCoreApplication::translate("MainWindow", "Search for Crypto Price:  ", nullptr));
        btnAPIOk->setText(QCoreApplication::translate("MainWindow", "Ok", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(apiTab), QCoreApplication::translate("MainWindow", "API", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(imProcTab), QCoreApplication::translate("MainWindow", "Image Processing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEISGNER_QTSQLAPPOGMFBB_H
