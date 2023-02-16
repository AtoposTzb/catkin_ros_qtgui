/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QHBoxLayout *hboxLayout;
    QTabWidget *tab_manager;
    QWidget *tab_status;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_3;
    QListView *view_logging;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *line_edit_topic;
    QLabel *label;
    QLineEdit *line_edit_host;
    QLineEdit *line_edit_master;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkbox_remember_settings;
    QCheckBox *checkbox_use_environment;
    QHBoxLayout *horizontalLayout;
    QPushButton *quit_button;
    QPushButton *button_connect;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_u;
    QPushButton *pushButton_i;
    QPushButton *pushButton_o;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_j;
    QCheckBox *checkBox_isAll;
    QPushButton *pushButton_l;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_m;
    QPushButton *pushButton_dou;
    QPushButton *pushButton_dian;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSlider *horizontalSlider_linear;
    QLabel *label_linear;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSlider *horizontalSlider_raw;
    QLabel *label_raw;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menu_File;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QStringLiteral("MainWindowDesign"));
        MainWindowDesign->resize(944, 789);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QStringLiteral("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QStringLiteral("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        hboxLayout = new QHBoxLayout(centralwidget);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        tab_manager = new QTabWidget(centralwidget);
        tab_manager->setObjectName(QStringLiteral("tab_manager"));
        tab_manager->setMinimumSize(QSize(100, 0));
        tab_manager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_status = new QWidget();
        tab_status->setObjectName(QStringLiteral("tab_status"));
        verticalLayout_2 = new QVBoxLayout(tab_status);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_12 = new QGroupBox(tab_status);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_12);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        view_logging = new QListView(groupBox_12);
        view_logging->setObjectName(QStringLiteral("view_logging"));

        gridLayout_3->addWidget(view_logging, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_12);

        tab_manager->addTab(tab_status, QString());

        hboxLayout->addWidget(tab_manager);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        line_edit_topic = new QLineEdit(groupBox);
        line_edit_topic->setObjectName(QStringLiteral("line_edit_topic"));
        line_edit_topic->setEnabled(false);

        verticalLayout_4->addWidget(line_edit_topic);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label);

        line_edit_host = new QLineEdit(groupBox);
        line_edit_host->setObjectName(QStringLiteral("line_edit_host"));

        verticalLayout_4->addWidget(line_edit_host);

        line_edit_master = new QLineEdit(groupBox);
        line_edit_master->setObjectName(QStringLiteral("line_edit_master"));

        verticalLayout_4->addWidget(line_edit_master);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_3);

        checkbox_remember_settings = new QCheckBox(groupBox);
        checkbox_remember_settings->setObjectName(QStringLiteral("checkbox_remember_settings"));
        checkbox_remember_settings->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(checkbox_remember_settings);

        checkbox_use_environment = new QCheckBox(groupBox);
        checkbox_use_environment->setObjectName(QStringLiteral("checkbox_use_environment"));
        checkbox_use_environment->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_4->addWidget(checkbox_use_environment);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        quit_button = new QPushButton(groupBox);
        quit_button->setObjectName(QStringLiteral("quit_button"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quit_button->sizePolicy().hasHeightForWidth());
        quit_button->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(quit_button);

        button_connect = new QPushButton(groupBox);
        button_connect->setObjectName(QStringLiteral("button_connect"));
        button_connect->setEnabled(true);
        sizePolicy2.setHeightForWidth(button_connect->sizePolicy().hasHeightForWidth());
        button_connect->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(button_connect);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_u = new QPushButton(groupBox);
        pushButton_u->setObjectName(QStringLiteral("pushButton_u"));

        horizontalLayout_2->addWidget(pushButton_u);

        pushButton_i = new QPushButton(groupBox);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));

        horizontalLayout_2->addWidget(pushButton_i);

        pushButton_o = new QPushButton(groupBox);
        pushButton_o->setObjectName(QStringLiteral("pushButton_o"));

        horizontalLayout_2->addWidget(pushButton_o);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_j = new QPushButton(groupBox);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));

        horizontalLayout_3->addWidget(pushButton_j);

        checkBox_isAll = new QCheckBox(groupBox);
        checkBox_isAll->setObjectName(QStringLiteral("checkBox_isAll"));

        horizontalLayout_3->addWidget(checkBox_isAll);

        pushButton_l = new QPushButton(groupBox);
        pushButton_l->setObjectName(QStringLiteral("pushButton_l"));

        horizontalLayout_3->addWidget(pushButton_l);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_m = new QPushButton(groupBox);
        pushButton_m->setObjectName(QStringLiteral("pushButton_m"));

        horizontalLayout_4->addWidget(pushButton_m);

        pushButton_dou = new QPushButton(groupBox);
        pushButton_dou->setObjectName(QStringLiteral("pushButton_dou"));

        horizontalLayout_4->addWidget(pushButton_dou);

        pushButton_dian = new QPushButton(groupBox);
        pushButton_dian->setObjectName(QStringLiteral("pushButton_dian"));

        horizontalLayout_4->addWidget(pushButton_dian);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSlider_linear = new QSlider(groupBox);
        horizontalSlider_linear->setObjectName(QStringLiteral("horizontalSlider_linear"));
        horizontalSlider_linear->setMaximum(100);
        horizontalSlider_linear->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_linear);

        label_linear = new QLabel(groupBox);
        label_linear->setObjectName(QStringLiteral("label_linear"));
        label_linear->setMinimumSize(QSize(30, 0));
        label_linear->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_5->addWidget(label_linear);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        horizontalSlider_raw = new QSlider(groupBox);
        horizontalSlider_raw->setObjectName(QStringLiteral("horizontalSlider_raw"));
        horizontalSlider_raw->setMaximum(100);
        horizontalSlider_raw->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_raw);

        label_raw = new QLabel(groupBox);
        label_raw->setObjectName(QStringLiteral("label_raw"));
        label_raw->setMinimumSize(QSize(30, 0));
        label_raw->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_6->addWidget(label_raw);


        verticalLayout_5->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_7->addWidget(frame);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        hboxLayout->addWidget(tabWidget);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 944, 32));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        MainWindowDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowDesign);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowDesign->setStatusBar(statusbar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));
        QObject::connect(quit_button, SIGNAL(clicked()), MainWindowDesign, SLOT(close()));

        tab_manager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "QRosApp", Q_NULLPTR));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("MainWindowDesign", "Logging", Q_NULLPTR));
        tab_manager->setTabText(tab_manager->indexOf(tab_status), QApplication::translate("MainWindowDesign", "Ros Communications", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "Ros Master", Q_NULLPTR));
        line_edit_topic->setText(QApplication::translate("MainWindowDesign", "unused", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindowDesign", "Ros Master Url", Q_NULLPTR));
        line_edit_host->setText(QApplication::translate("MainWindowDesign", "192.168.1.67", Q_NULLPTR));
        line_edit_master->setText(QApplication::translate("MainWindowDesign", "http://192.168.1.2:11311/", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindowDesign", "Ros IP", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindowDesign", "Ros Hostname", Q_NULLPTR));
        checkbox_remember_settings->setText(QApplication::translate("MainWindowDesign", "Remember settings on startup", Q_NULLPTR));
        checkbox_use_environment->setText(QApplication::translate("MainWindowDesign", "Use environment variables", Q_NULLPTR));
        quit_button->setText(QApplication::translate("MainWindowDesign", "Quit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        button_connect->setToolTip(QApplication::translate("MainWindowDesign", "Set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_connect->setStatusTip(QApplication::translate("MainWindowDesign", "Clear all waypoints and set the target to the current joint trajectory state.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        button_connect->setText(QApplication::translate("MainWindowDesign", "Connect", Q_NULLPTR));
        pushButton_u->setText(QApplication::translate("MainWindowDesign", "u", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_u->setShortcut(QApplication::translate("MainWindowDesign", "U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_i->setText(QApplication::translate("MainWindowDesign", "i", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_i->setShortcut(QApplication::translate("MainWindowDesign", "I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_o->setText(QApplication::translate("MainWindowDesign", "o", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_o->setShortcut(QApplication::translate("MainWindowDesign", "O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_j->setText(QApplication::translate("MainWindowDesign", "j", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_j->setShortcut(QApplication::translate("MainWindowDesign", "J", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        checkBox_isAll->setText(QApplication::translate("MainWindowDesign", "\345\205\250\345\220\221\350\275\256\346\250\241\345\274\217", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        checkBox_isAll->setShortcut(QApplication::translate("MainWindowDesign", "K", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_l->setText(QApplication::translate("MainWindowDesign", "l", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_l->setShortcut(QApplication::translate("MainWindowDesign", "L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_m->setText(QApplication::translate("MainWindowDesign", "m", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_m->setShortcut(QApplication::translate("MainWindowDesign", "M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_dou->setText(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_dou->setShortcut(QApplication::translate("MainWindowDesign", ",", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_dian->setText(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_dian->setShortcut(QApplication::translate("MainWindowDesign", ".", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label_4->setText(QApplication::translate("MainWindowDesign", "\347\272\277\351\200\237\345\272\246: ", Q_NULLPTR));
        label_linear->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindowDesign", "\350\247\222\351\200\237\345\272\246: ", Q_NULLPTR));
        label_raw->setText(QApplication::translate("MainWindowDesign", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDesign", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowDesign", "Tab 2", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
