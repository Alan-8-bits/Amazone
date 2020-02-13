/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QFrame *loginFrame;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *emailLE;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *loginPB;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *passwordLE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *paswordLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *loginLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *emailLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *newUserLabel;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *newUserPB;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QFrame *newUserFrame;
    QGridLayout *gridLayout_5;
    QLabel *newPasswordLabel;
    QLineEdit *lineEdit;
    QLineEdit *newMailLE;
    QLabel *createUserLabel;
    QLineEdit *newPasswordLE;
    QLabel *newMailLabel;
    QPushButton *createPB;
    QLabel *label;
    QLabel *newNameLabel;
    QLineEdit *newNameLE;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QLineEdit *BusquedaLE;
    QComboBox *comboBox_2;
    QFrame *mainFrame;
    QGridLayout *gridLayout_7;
    QScrollArea *Departamentos;
    QWidget *scrollAreaWidgetContents;
    QComboBox *comboBox;
    QScrollArea *recomendados;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *recomendaciones;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 646);
        MainWindow->setBaseSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        loginFrame = new QFrame(page);
        loginFrame->setObjectName(QString::fromUtf8("loginFrame"));
        loginFrame->setFrameShape(QFrame::StyledPanel);
        loginFrame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(loginFrame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        emailLE = new QLineEdit(loginFrame);
        emailLE->setObjectName(QString::fromUtf8("emailLE"));
        emailLE->setMinimumSize(QSize(300, 28));
        emailLE->setMaximumSize(QSize(300, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 52, 89, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        emailLE->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Century Gothic"));
        font.setPointSize(10);
        emailLE->setFont(font);
        emailLE->setInputMask(QString::fromUtf8(""));
        emailLE->setText(QString::fromUtf8(""));
        emailLE->setMaxLength(32767);
        emailLE->setFrame(false);

        horizontalLayout_3->addWidget(emailLE);


        gridLayout_4->addLayout(horizontalLayout_3, 8, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        loginPB = new QPushButton(loginFrame);
        loginPB->setObjectName(QString::fromUtf8("loginPB"));
        loginPB->setEnabled(false);
        loginPB->setMaximumSize(QSize(300, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush6(QColor(255, 170, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        loginPB->setPalette(palette1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Freestyle Script"));
        font1.setPointSize(22);
        loginPB->setFont(font1);
        loginPB->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_6->addWidget(loginPB);


        gridLayout_4->addLayout(horizontalLayout_6, 12, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        passwordLE = new QLineEdit(loginFrame);
        passwordLE->setObjectName(QString::fromUtf8("passwordLE"));
        passwordLE->setMinimumSize(QSize(0, 28));
        passwordLE->setMaximumSize(QSize(300, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        passwordLE->setPalette(palette2);
        passwordLE->setFont(font);
        passwordLE->setFrame(false);
        passwordLE->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(passwordLE);


        gridLayout_4->addLayout(horizontalLayout_5, 11, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        paswordLabel = new QLabel(loginFrame);
        paswordLabel->setObjectName(QString::fromUtf8("paswordLabel"));
        paswordLabel->setMaximumSize(QSize(300, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        paswordLabel->setPalette(palette3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        paswordLabel->setFont(font2);
        paswordLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(paswordLabel);


        gridLayout_4->addLayout(horizontalLayout_4, 10, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loginLabel = new QLabel(loginFrame);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setMinimumSize(QSize(500, 0));
        loginLabel->setMaximumSize(QSize(500, 800));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        loginLabel->setPalette(palette4);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Freestyle Script"));
        font3.setPointSize(150);
        font3.setBold(false);
        font3.setWeight(50);
        loginLabel->setFont(font3);
        loginLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(loginLabel);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_2, 14, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        emailLabel = new QLabel(loginFrame);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setMaximumSize(QSize(300, 20));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        emailLabel->setPalette(palette5);
        emailLabel->setFont(font2);
        emailLabel->setScaledContents(false);
        emailLabel->setWordWrap(false);

        horizontalLayout->addWidget(emailLabel);


        gridLayout_4->addLayout(horizontalLayout, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        newUserLabel = new QLabel(loginFrame);
        newUserLabel->setObjectName(QString::fromUtf8("newUserLabel"));
        newUserLabel->setMaximumSize(QSize(300, 20));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        newUserLabel->setPalette(palette6);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Gothic"));
        newUserLabel->setFont(font4);
        newUserLabel->setOpenExternalLinks(true);

        horizontalLayout_7->addWidget(newUserLabel);


        gridLayout_4->addLayout(horizontalLayout_7, 15, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        newUserPB = new QPushButton(loginFrame);
        newUserPB->setObjectName(QString::fromUtf8("newUserPB"));
        newUserPB->setMaximumSize(QSize(300, 30));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        newUserPB->setPalette(palette7);
        QFont font5;
        font5.setFamily(QString::fromUtf8("Freestyle Script"));
        font5.setPointSize(22);
        font5.setBold(false);
        font5.setWeight(50);
        newUserPB->setFont(font5);

        horizontalLayout_8->addWidget(newUserPB);


        gridLayout_4->addLayout(horizontalLayout_8, 16, 0, 1, 1);


        gridLayout_2->addWidget(loginFrame, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        newUserFrame = new QFrame(page_2);
        newUserFrame->setObjectName(QString::fromUtf8("newUserFrame"));
        newUserFrame->setFrameShape(QFrame::StyledPanel);
        newUserFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(newUserFrame);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(9, 9, 9, 9);
        newPasswordLabel = new QLabel(newUserFrame);
        newPasswordLabel->setObjectName(QString::fromUtf8("newPasswordLabel"));
        newPasswordLabel->setMaximumSize(QSize(16777215, 20));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        newPasswordLabel->setPalette(palette8);
        newPasswordLabel->setFont(font2);

        gridLayout_5->addWidget(newPasswordLabel, 5, 0, 1, 1);

        lineEdit = new QLineEdit(newUserFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 28));
        lineEdit->setMaximumSize(QSize(300, 16777215));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        lineEdit->setPalette(palette9);
        lineEdit->setFont(font);
        lineEdit->setFrame(false);
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_5->addWidget(lineEdit, 8, 0, 1, 1);

        newMailLE = new QLineEdit(newUserFrame);
        newMailLE->setObjectName(QString::fromUtf8("newMailLE"));
        newMailLE->setMinimumSize(QSize(0, 28));
        newMailLE->setMaximumSize(QSize(300, 16777215));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        newMailLE->setPalette(palette10);
        newMailLE->setFont(font);
        newMailLE->setInputMask(QString::fromUtf8(""));
        newMailLE->setText(QString::fromUtf8(""));
        newMailLE->setFrame(false);

        gridLayout_5->addWidget(newMailLE, 4, 0, 1, 1);

        createUserLabel = new QLabel(newUserFrame);
        createUserLabel->setObjectName(QString::fromUtf8("createUserLabel"));
        createUserLabel->setMaximumSize(QSize(16777215, 40));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        createUserLabel->setPalette(palette11);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Freestyle Script"));
        font6.setPointSize(35);
        font6.setBold(false);
        font6.setWeight(50);
        createUserLabel->setFont(font6);
        createUserLabel->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(createUserLabel, 0, 0, 1, 1);

        newPasswordLE = new QLineEdit(newUserFrame);
        newPasswordLE->setObjectName(QString::fromUtf8("newPasswordLE"));
        newPasswordLE->setMinimumSize(QSize(0, 28));
        newPasswordLE->setMaximumSize(QSize(300, 16777215));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        newPasswordLE->setPalette(palette12);
        newPasswordLE->setFont(font);
        newPasswordLE->setFrame(false);
        newPasswordLE->setEchoMode(QLineEdit::Password);

        gridLayout_5->addWidget(newPasswordLE, 6, 0, 1, 1);

        newMailLabel = new QLabel(newUserFrame);
        newMailLabel->setObjectName(QString::fromUtf8("newMailLabel"));
        newMailLabel->setMaximumSize(QSize(16777215, 20));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        newMailLabel->setPalette(palette13);
        newMailLabel->setFont(font2);

        gridLayout_5->addWidget(newMailLabel, 3, 0, 1, 1);

        createPB = new QPushButton(newUserFrame);
        createPB->setObjectName(QString::fromUtf8("createPB"));
        createPB->setEnabled(false);
        createPB->setMaximumSize(QSize(300, 30));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        createPB->setPalette(palette14);
        createPB->setFont(font1);

        gridLayout_5->addWidget(createPB, 10, 0, 1, 1);

        label = new QLabel(newUserFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label->setPalette(palette15);
        label->setFont(font2);

        gridLayout_5->addWidget(label, 7, 0, 1, 1);

        newNameLabel = new QLabel(newUserFrame);
        newNameLabel->setObjectName(QString::fromUtf8("newNameLabel"));
        newNameLabel->setMaximumSize(QSize(300, 20));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        newNameLabel->setPalette(palette16);
        newNameLabel->setFont(font2);
        newNameLabel->setTextFormat(Qt::AutoText);
        newNameLabel->setScaledContents(false);
        newNameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        newNameLabel->setWordWrap(false);
        newNameLabel->setOpenExternalLinks(false);

        gridLayout_5->addWidget(newNameLabel, 1, 0, 1, 1);

        newNameLE = new QLineEdit(newUserFrame);
        newNameLE->setObjectName(QString::fromUtf8("newNameLE"));
        newNameLE->setMinimumSize(QSize(0, 28));
        newNameLE->setMaximumSize(QSize(300, 16777215));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
        newNameLE->setPalette(palette17);
        newNameLE->setFont(font);
        newNameLE->setFrame(false);

        gridLayout_5->addWidget(newNameLE, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 9, 0, 1, 1);


        gridLayout_3->addWidget(newUserFrame, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        BusquedaLE = new QLineEdit(page_3);
        BusquedaLE->setObjectName(QString::fromUtf8("BusquedaLE"));

        gridLayout_6->addWidget(BusquedaLE, 2, 0, 1, 1);

        comboBox_2 = new QComboBox(page_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setFrame(true);

        gridLayout_6->addWidget(comboBox_2, 2, 1, 1, 1);

        mainFrame = new QFrame(page_3);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setFrameShape(QFrame::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(mainFrame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        Departamentos = new QScrollArea(mainFrame);
        Departamentos->setObjectName(QString::fromUtf8("Departamentos"));
        QFont font7;
        font7.setKerning(true);
        Departamentos->setFont(font7);
        Departamentos->setMouseTracking(false);
        Departamentos->setFrameShape(QFrame::NoFrame);
        Departamentos->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Departamentos->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        Departamentos->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        Departamentos->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 762, 268));
        Departamentos->setWidget(scrollAreaWidgetContents);

        gridLayout_7->addWidget(Departamentos, 0, 1, 1, 1);


        gridLayout_6->addWidget(mainFrame, 4, 0, 1, 2);

        comboBox = new QComboBox(page_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(false);

        gridLayout_6->addWidget(comboBox, 0, 0, 1, 2);

        recomendados = new QScrollArea(page_3);
        recomendados->setObjectName(QString::fromUtf8("recomendados"));
        recomendados->setMaximumSize(QSize(16777215, 200));
        recomendados->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 762, 198));
        recomendados->setWidget(scrollAreaWidgetContents_2);

        gridLayout_6->addWidget(recomendados, 6, 0, 1, 2);

        recomendaciones = new QLabel(page_3);
        recomendaciones->setObjectName(QString::fromUtf8("recomendaciones"));

        gridLayout_6->addWidget(recomendaciones, 5, 0, 1, 1);

        stackedWidget->addWidget(page_3);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Amazone", nullptr));
        emailLE->setPlaceholderText(QApplication::translate("MainWindow", "Escribe tu correo", nullptr));
        loginPB->setText(QApplication::translate("MainWindow", "Iniciar Sesion", nullptr));
        passwordLE->setPlaceholderText(QApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        paswordLabel->setText(QApplication::translate("MainWindow", "Password", nullptr));
        loginLabel->setText(QApplication::translate("MainWindow", "Amazone", nullptr));
        emailLabel->setText(QApplication::translate("MainWindow", "Correo", nullptr));
        newUserLabel->setText(QApplication::translate("MainWindow", "\302\277No tienes cuenta?", nullptr));
        newUserPB->setText(QApplication::translate("MainWindow", "Crear Cuenta", nullptr));
        newPasswordLabel->setText(QApplication::translate("MainWindow", "Password", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Re-escribe la contrase\303\261a", nullptr));
        newMailLE->setPlaceholderText(QApplication::translate("MainWindow", "E-Mail", nullptr));
        createUserLabel->setText(QApplication::translate("MainWindow", "Crear Cuenta", nullptr));
        newPasswordLE->setPlaceholderText(QApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        newMailLabel->setText(QApplication::translate("MainWindow", "Correo", nullptr));
        createPB->setText(QApplication::translate("MainWindow", "Crear Cuenta", nullptr));
        label->setText(QApplication::translate("MainWindow", "Confirma Contrase\303\261a", nullptr));
        newNameLabel->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        newNameLE->setPlaceholderText(QApplication::translate("MainWindow", "Nombre/s", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "Ascendente", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "Descendente", nullptr));

        comboBox->setItemText(0, QApplication::translate("MainWindow", "Alimentos y Bebidas", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Deporte y Aire Libre", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Electronicos", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "Hogar y Cocina", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "Libros", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "Todos los Departamentos", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "Alimentos y Bebidas", nullptr));
        recomendaciones->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
