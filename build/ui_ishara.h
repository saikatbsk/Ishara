/********************************************************************************
** Form generated from reading UI file 'ishara.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISHARA_H
#define UI_ISHARA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ishara
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionStart;
    QAction *actionOriginal;
    QAction *actionThresh_1;
    QAction *actionThresh_2;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *start_here;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_20;
    QLabel *label_26;
    QComboBox *comboSelectCam;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_12;
    QPushButton *btnStartStop;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *lblDisplayClean;
    QSpacerItem *verticalSpacer_3;
    QWidget *configure_markers;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLabel *lblConfigureRight;
    QLabel *lblConfigureLeft;
    QLabel *label_20;
    QLabel *label_19;
    QGridLayout *gridLayout_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_7;
    QSlider *sliderHMax1;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *sliderHMin1;
    QSpinBox *spnHMin1;
    QSpinBox *spnHMax1;
    QFrame *line;
    QLabel *label_2;
    QGridLayout *gridLayout_8;
    QLabel *label_10;
    QSlider *sliderSMin1;
    QLabel *label_9;
    QSlider *sliderSMax1;
    QSpinBox *spnSMin1;
    QSpinBox *spnSMax1;
    QFrame *line_2;
    QLabel *label_3;
    QGridLayout *gridLayout_13;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *sliderVMin1;
    QSlider *sliderVMax1;
    QSpinBox *spnVMin1;
    QSpinBox *spnVMax1;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_11;
    QLabel *label_15;
    QLabel *label_16;
    QSlider *sliderSMin2;
    QSlider *sliderSMax2;
    QSpinBox *spnSMin2;
    QSpinBox *spnSMax2;
    QLabel *label_5;
    QGridLayout *gridLayout_10;
    QLabel *label_13;
    QSlider *sliderHMin2;
    QLabel *label_14;
    QSlider *sliderHMax2;
    QSpinBox *spnHMin2;
    QSpinBox *spnHMax2;
    QLabel *label_4;
    QLabel *label_6;
    QGridLayout *gridLayout_14;
    QLabel *label_17;
    QLabel *label_18;
    QSlider *sliderVMax2;
    QSlider *sliderVMin2;
    QSpinBox *spnVMin2;
    QSpinBox *spnVMax2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *settings;
    QGridLayout *gridLayout_18;
    QGridLayout *gridLayout_17;
    QSpinBox *spnPinchR;
    QSlider *sliderPinchR;
    QLabel *label_24;
    QFrame *line_9;
    QGridLayout *gridLayout_16;
    QCheckBox *chkEnableRightClick;
    QCheckBox *chkEnableLeftClick;
    QCheckBox *chkEnableScroll;
    QGridLayout *gridLayout_19;
    QSlider *sliderRCRC;
    QSpinBox *spnRCRC;
    QLabel *label_25;
    QGridLayout *gridLayout_15;
    QSlider *sliderSmoothFac;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_21;
    QFrame *line_5;
    QFrame *line_8;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuImage;
    QMenu *menuGrab_Frame;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ishara)
    {
        if (ishara->objectName().isEmpty())
            ishara->setObjectName(QString::fromUtf8("ishara"));
        ishara->resize(664, 479);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix1/res/ishara.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ishara->setWindowIcon(icon);
        ishara->setTabShape(QTabWidget::Rounded);
        actionQuit = new QAction(ishara);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(ishara);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionStart = new QAction(ishara);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionOriginal = new QAction(ishara);
        actionOriginal->setObjectName(QString::fromUtf8("actionOriginal"));
        actionThresh_1 = new QAction(ishara);
        actionThresh_1->setObjectName(QString::fromUtf8("actionThresh_1"));
        actionThresh_2 = new QAction(ishara);
        actionThresh_2->setObjectName(QString::fromUtf8("actionThresh_2"));
        centralWidget = new QWidget(ishara);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        start_here = new QWidget();
        start_here->setObjectName(QString::fromUtf8("start_here"));
        gridLayout_3 = new QGridLayout(start_here);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_20 = new QGridLayout();
        gridLayout_20->setSpacing(6);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        label_26 = new QLabel(start_here);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_20->addWidget(label_26, 0, 0, 1, 1);

        comboSelectCam = new QComboBox(start_here);
        comboSelectCam->setObjectName(QString::fromUtf8("comboSelectCam"));

        gridLayout_20->addWidget(comboSelectCam, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_20, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        btnStartStop = new QPushButton(start_here);
        btnStartStop->setObjectName(QString::fromUtf8("btnStartStop"));
        btnStartStop->setMinimumSize(QSize(80, 60));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btnStartStop->setFont(font);

        gridLayout_12->addWidget(btnStartStop, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_12, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lblDisplayClean = new QLabel(start_here);
        lblDisplayClean->setObjectName(QString::fromUtf8("lblDisplayClean"));
        lblDisplayClean->setAutoFillBackground(false);
        lblDisplayClean->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lblDisplayClean->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDisplayClean, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 0, 1, 1);

        tabWidget->addTab(start_here, QString());
        configure_markers = new QWidget();
        configure_markers->setObjectName(QString::fromUtf8("configure_markers"));
        gridLayout_5 = new QGridLayout(configure_markers);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lblConfigureRight = new QLabel(configure_markers);
        lblConfigureRight->setObjectName(QString::fromUtf8("lblConfigureRight"));
        lblConfigureRight->setAutoFillBackground(false);
        lblConfigureRight->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lblConfigureRight->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblConfigureRight, 1, 1, 1, 1);

        lblConfigureLeft = new QLabel(configure_markers);
        lblConfigureLeft->setObjectName(QString::fromUtf8("lblConfigureLeft"));
        lblConfigureLeft->setAutoFillBackground(false);
        lblConfigureLeft->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        lblConfigureLeft->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblConfigureLeft, 1, 0, 1, 1);

        label_20 = new QLabel(configure_markers);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_4->addWidget(label_20, 0, 1, 1, 1);

        label_19 = new QLabel(configure_markers);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 0, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget = new QWidget(configure_markers);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        sliderHMax1 = new QSlider(widget);
        sliderHMax1->setObjectName(QString::fromUtf8("sliderHMax1"));
        sliderHMax1->setCursor(QCursor(Qt::ArrowCursor));
        sliderHMax1->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(sliderHMax1, 1, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_7->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_7->addWidget(label_8, 1, 0, 1, 1);

        sliderHMin1 = new QSlider(widget);
        sliderHMin1->setObjectName(QString::fromUtf8("sliderHMin1"));
        sliderHMin1->setCursor(QCursor(Qt::ArrowCursor));
        sliderHMin1->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(sliderHMin1, 0, 1, 1, 1);

        spnHMin1 = new QSpinBox(widget);
        spnHMin1->setObjectName(QString::fromUtf8("spnHMin1"));
        spnHMin1->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(spnHMin1, 0, 2, 1, 1);

        spnHMax1 = new QSpinBox(widget);
        spnHMax1->setObjectName(QString::fromUtf8("spnHMax1"));
        spnHMax1->setMinimumSize(QSize(0, 0));

        gridLayout_7->addWidget(spnHMax1, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_7);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_8->addWidget(label_10, 1, 0, 1, 1);

        sliderSMin1 = new QSlider(widget);
        sliderSMin1->setObjectName(QString::fromUtf8("sliderSMin1"));
        sliderSMin1->setCursor(QCursor(Qt::ArrowCursor));
        sliderSMin1->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(sliderSMin1, 0, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_8->addWidget(label_9, 0, 0, 1, 1);

        sliderSMax1 = new QSlider(widget);
        sliderSMax1->setObjectName(QString::fromUtf8("sliderSMax1"));
        sliderSMax1->setCursor(QCursor(Qt::ArrowCursor));
        sliderSMax1->setOrientation(Qt::Horizontal);

        gridLayout_8->addWidget(sliderSMax1, 1, 1, 1, 1);

        spnSMin1 = new QSpinBox(widget);
        spnSMin1->setObjectName(QString::fromUtf8("spnSMin1"));
        spnSMin1->setMinimumSize(QSize(0, 0));

        gridLayout_8->addWidget(spnSMin1, 0, 2, 1, 1);

        spnSMax1 = new QSpinBox(widget);
        spnSMax1->setObjectName(QString::fromUtf8("spnSMax1"));
        spnSMax1->setMinimumSize(QSize(0, 0));

        gridLayout_8->addWidget(spnSMax1, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_8);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_13->addWidget(label_11, 0, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_13->addWidget(label_12, 1, 0, 1, 1);

        sliderVMin1 = new QSlider(widget);
        sliderVMin1->setObjectName(QString::fromUtf8("sliderVMin1"));
        sliderVMin1->setCursor(QCursor(Qt::ArrowCursor));
        sliderVMin1->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderVMin1, 0, 1, 1, 1);

        sliderVMax1 = new QSlider(widget);
        sliderVMax1->setObjectName(QString::fromUtf8("sliderVMax1"));
        sliderVMax1->setCursor(QCursor(Qt::ArrowCursor));
        sliderVMax1->setOrientation(Qt::Horizontal);

        gridLayout_13->addWidget(sliderVMax1, 1, 1, 1, 1);

        spnVMin1 = new QSpinBox(widget);
        spnVMin1->setObjectName(QString::fromUtf8("spnVMin1"));
        spnVMin1->setMinimumSize(QSize(0, 0));

        gridLayout_13->addWidget(spnVMin1, 0, 2, 1, 1);

        spnVMax1 = new QSpinBox(widget);
        spnVMax1->setObjectName(QString::fromUtf8("spnVMax1"));
        spnVMax1->setMinimumSize(QSize(0, 0));

        gridLayout_13->addWidget(spnVMax1, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_13);


        gridLayout_6->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(configure_markers);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_9 = new QGridLayout(widget_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_11->addWidget(label_15, 0, 0, 1, 1);

        label_16 = new QLabel(widget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_11->addWidget(label_16, 1, 0, 1, 1);

        sliderSMin2 = new QSlider(widget_2);
        sliderSMin2->setObjectName(QString::fromUtf8("sliderSMin2"));
        sliderSMin2->setCursor(QCursor(Qt::ArrowCursor));
        sliderSMin2->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(sliderSMin2, 0, 1, 1, 1);

        sliderSMax2 = new QSlider(widget_2);
        sliderSMax2->setObjectName(QString::fromUtf8("sliderSMax2"));
        sliderSMax2->setCursor(QCursor(Qt::ArrowCursor));
        sliderSMax2->setOrientation(Qt::Horizontal);

        gridLayout_11->addWidget(sliderSMax2, 1, 1, 1, 1);

        spnSMin2 = new QSpinBox(widget_2);
        spnSMin2->setObjectName(QString::fromUtf8("spnSMin2"));
        spnSMin2->setMinimumSize(QSize(0, 0));

        gridLayout_11->addWidget(spnSMin2, 0, 2, 1, 1);

        spnSMax2 = new QSpinBox(widget_2);
        spnSMax2->setObjectName(QString::fromUtf8("spnSMax2"));
        spnSMax2->setMinimumSize(QSize(0, 0));

        gridLayout_11->addWidget(spnSMax2, 1, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_11, 4, 0, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_5, 3, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_10->addWidget(label_13, 0, 0, 1, 1);

        sliderHMin2 = new QSlider(widget_2);
        sliderHMin2->setObjectName(QString::fromUtf8("sliderHMin2"));
        sliderHMin2->setCursor(QCursor(Qt::ArrowCursor));
        sliderHMin2->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(sliderHMin2, 0, 1, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_10->addWidget(label_14, 1, 0, 1, 1);

        sliderHMax2 = new QSlider(widget_2);
        sliderHMax2->setObjectName(QString::fromUtf8("sliderHMax2"));
        sliderHMax2->setCursor(QCursor(Qt::ArrowCursor));
        sliderHMax2->setOrientation(Qt::Horizontal);

        gridLayout_10->addWidget(sliderHMax2, 1, 1, 1, 1);

        spnHMin2 = new QSpinBox(widget_2);
        spnHMin2->setObjectName(QString::fromUtf8("spnHMin2"));
        spnHMin2->setMinimumSize(QSize(0, 0));

        gridLayout_10->addWidget(spnHMin2, 0, 2, 1, 1);

        spnHMax2 = new QSpinBox(widget_2);
        spnHMax2->setObjectName(QString::fromUtf8("spnHMax2"));
        spnHMax2->setMinimumSize(QSize(0, 0));

        gridLayout_10->addWidget(spnHMax2, 1, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_10, 1, 0, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_6, 6, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_17 = new QLabel(widget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_14->addWidget(label_17, 0, 0, 1, 1);

        label_18 = new QLabel(widget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_14->addWidget(label_18, 1, 0, 1, 1);

        sliderVMax2 = new QSlider(widget_2);
        sliderVMax2->setObjectName(QString::fromUtf8("sliderVMax2"));
        sliderVMax2->setCursor(QCursor(Qt::ArrowCursor));
        sliderVMax2->setOrientation(Qt::Horizontal);

        gridLayout_14->addWidget(sliderVMax2, 1, 1, 1, 1);

        sliderVMin2 = new QSlider(widget_2);
        sliderVMin2->setObjectName(QString::fromUtf8("sliderVMin2"));
        sliderVMin2->setCursor(QCursor(Qt::ArrowCursor));
        sliderVMin2->setOrientation(Qt::Horizontal);

        gridLayout_14->addWidget(sliderVMin2, 0, 1, 1, 1);

        spnVMin2 = new QSpinBox(widget_2);
        spnVMin2->setObjectName(QString::fromUtf8("spnVMin2"));
        spnVMin2->setMinimumSize(QSize(0, 0));

        gridLayout_14->addWidget(spnVMin2, 0, 2, 1, 1);

        spnVMax2 = new QSpinBox(widget_2);
        spnVMax2->setObjectName(QString::fromUtf8("spnVMax2"));
        spnVMax2->setMinimumSize(QSize(0, 0));

        gridLayout_14->addWidget(spnVMax2, 1, 2, 1, 1);


        gridLayout_9->addLayout(gridLayout_14, 7, 0, 1, 1);

        line_3 = new QFrame(widget_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_3, 2, 0, 1, 1);

        line_4 = new QFrame(widget_2);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line_4, 5, 0, 1, 1);


        gridLayout_6->addWidget(widget_2, 0, 2, 1, 1);

        line_6 = new QFrame(configure_markers);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(line_6, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_6, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 0, 1, 1);

        tabWidget->addTab(configure_markers, QString());
        settings = new QWidget();
        settings->setObjectName(QString::fromUtf8("settings"));
        gridLayout_18 = new QGridLayout(settings);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        spnPinchR = new QSpinBox(settings);
        spnPinchR->setObjectName(QString::fromUtf8("spnPinchR"));

        gridLayout_17->addWidget(spnPinchR, 1, 1, 1, 1);

        sliderPinchR = new QSlider(settings);
        sliderPinchR->setObjectName(QString::fromUtf8("sliderPinchR"));
        sliderPinchR->setOrientation(Qt::Horizontal);

        gridLayout_17->addWidget(sliderPinchR, 1, 0, 1, 1);

        label_24 = new QLabel(settings);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_24, 0, 0, 1, 2);


        gridLayout_18->addLayout(gridLayout_17, 0, 0, 1, 1);

        line_9 = new QFrame(settings);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_18->addWidget(line_9, 3, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        chkEnableRightClick = new QCheckBox(settings);
        chkEnableRightClick->setObjectName(QString::fromUtf8("chkEnableRightClick"));

        gridLayout_16->addWidget(chkEnableRightClick, 0, 2, 1, 1);

        chkEnableLeftClick = new QCheckBox(settings);
        chkEnableLeftClick->setObjectName(QString::fromUtf8("chkEnableLeftClick"));

        gridLayout_16->addWidget(chkEnableLeftClick, 0, 1, 1, 1);

        chkEnableScroll = new QCheckBox(settings);
        chkEnableScroll->setObjectName(QString::fromUtf8("chkEnableScroll"));

        gridLayout_16->addWidget(chkEnableScroll, 0, 3, 1, 1);


        gridLayout_18->addLayout(gridLayout_16, 6, 0, 1, 1);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setSpacing(6);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        sliderRCRC = new QSlider(settings);
        sliderRCRC->setObjectName(QString::fromUtf8("sliderRCRC"));
        sliderRCRC->setOrientation(Qt::Horizontal);

        gridLayout_19->addWidget(sliderRCRC, 1, 0, 1, 1);

        spnRCRC = new QSpinBox(settings);
        spnRCRC->setObjectName(QString::fromUtf8("spnRCRC"));

        gridLayout_19->addWidget(spnRCRC, 1, 1, 1, 1);

        label_25 = new QLabel(settings);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_19->addWidget(label_25, 0, 0, 1, 2);


        gridLayout_18->addLayout(gridLayout_19, 2, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        sliderSmoothFac = new QSlider(settings);
        sliderSmoothFac->setObjectName(QString::fromUtf8("sliderSmoothFac"));
        sliderSmoothFac->setOrientation(Qt::Horizontal);

        gridLayout_15->addWidget(sliderSmoothFac, 1, 1, 1, 1);

        label_22 = new QLabel(settings);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_15->addWidget(label_22, 1, 0, 1, 1);

        label_23 = new QLabel(settings);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_15->addWidget(label_23, 1, 2, 1, 1);

        label_21 = new QLabel(settings);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_15->addWidget(label_21, 0, 0, 1, 3);


        gridLayout_18->addLayout(gridLayout_15, 4, 0, 1, 1);

        line_5 = new QFrame(settings);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_18->addWidget(line_5, 1, 0, 1, 1);

        line_8 = new QFrame(settings);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout_18->addWidget(line_8, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer, 7, 0, 1, 1);

        tabWidget->addTab(settings, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        ishara->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ishara);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 664, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuImage = new QMenu(menuBar);
        menuImage->setObjectName(QString::fromUtf8("menuImage"));
        menuGrab_Frame = new QMenu(menuImage);
        menuGrab_Frame->setObjectName(QString::fromUtf8("menuGrab_Frame"));
        ishara->setMenuBar(menuBar);
        statusBar = new QStatusBar(ishara);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ishara->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, comboSelectCam);
        QWidget::setTabOrder(comboSelectCam, btnStartStop);
        QWidget::setTabOrder(btnStartStop, sliderHMin1);
        QWidget::setTabOrder(sliderHMin1, spnHMin1);
        QWidget::setTabOrder(spnHMin1, sliderHMax1);
        QWidget::setTabOrder(sliderHMax1, spnHMax1);
        QWidget::setTabOrder(spnHMax1, sliderSMin1);
        QWidget::setTabOrder(sliderSMin1, spnSMin1);
        QWidget::setTabOrder(spnSMin1, sliderSMax1);
        QWidget::setTabOrder(sliderSMax1, spnSMax1);
        QWidget::setTabOrder(spnSMax1, sliderVMin1);
        QWidget::setTabOrder(sliderVMin1, spnVMin1);
        QWidget::setTabOrder(spnVMin1, sliderVMax1);
        QWidget::setTabOrder(sliderVMax1, spnVMax1);
        QWidget::setTabOrder(spnVMax1, sliderHMin2);
        QWidget::setTabOrder(sliderHMin2, spnHMin2);
        QWidget::setTabOrder(spnHMin2, sliderHMax2);
        QWidget::setTabOrder(sliderHMax2, spnHMax2);
        QWidget::setTabOrder(spnHMax2, sliderSMin2);
        QWidget::setTabOrder(sliderSMin2, spnSMin2);
        QWidget::setTabOrder(spnSMin2, sliderSMax2);
        QWidget::setTabOrder(sliderSMax2, spnSMax2);
        QWidget::setTabOrder(spnSMax2, sliderVMin2);
        QWidget::setTabOrder(sliderVMin2, spnVMin2);
        QWidget::setTabOrder(spnVMin2, sliderVMax2);
        QWidget::setTabOrder(sliderVMax2, spnVMax2);
        QWidget::setTabOrder(spnVMax2, sliderPinchR);
        QWidget::setTabOrder(sliderPinchR, spnPinchR);
        QWidget::setTabOrder(spnPinchR, sliderRCRC);
        QWidget::setTabOrder(sliderRCRC, spnRCRC);
        QWidget::setTabOrder(spnRCRC, sliderSmoothFac);
        QWidget::setTabOrder(sliderSmoothFac, chkEnableLeftClick);
        QWidget::setTabOrder(chkEnableLeftClick, chkEnableRightClick);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuImage->menuAction());
        menuFile->addAction(actionStart);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);
        menuImage->addAction(menuGrab_Frame->menuAction());
        menuGrab_Frame->addAction(actionOriginal);
        menuGrab_Frame->addAction(actionThresh_1);
        menuGrab_Frame->addAction(actionThresh_2);

        retranslateUi(ishara);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ishara);
    } // setupUi

    void retranslateUi(QMainWindow *ishara)
    {
        ishara->setWindowTitle(QApplication::translate("ishara", "ishara", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("ishara", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("ishara", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("ishara", "About", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("ishara", "F1", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("ishara", "Start", 0, QApplication::UnicodeUTF8));
        actionStart->setShortcut(QApplication::translate("ishara", "F9", 0, QApplication::UnicodeUTF8));
        actionOriginal->setText(QApplication::translate("ishara", "Original", 0, QApplication::UnicodeUTF8));
        actionOriginal->setShortcut(QApplication::translate("ishara", "Alt+C", 0, QApplication::UnicodeUTF8));
        actionThresh_1->setText(QApplication::translate("ishara", "Thresh 1", 0, QApplication::UnicodeUTF8));
        actionThresh_1->setShortcut(QApplication::translate("ishara", "Alt+T", 0, QApplication::UnicodeUTF8));
        actionThresh_2->setText(QApplication::translate("ishara", "Thresh 2", 0, QApplication::UnicodeUTF8));
        actionThresh_2->setShortcut(QApplication::translate("ishara", "Alt+Y", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("ishara", "Select Camera:", 0, QApplication::UnicodeUTF8));
        btnStartStop->setText(QApplication::translate("ishara", "Start", 0, QApplication::UnicodeUTF8));
        lblDisplayClean->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(start_here), QApplication::translate("ishara", "Start Here", 0, QApplication::UnicodeUTF8));
        lblConfigureRight->setText(QString());
        lblConfigureLeft->setText(QString());
        label_20->setText(QApplication::translate("ishara", "Select Color for Marker 2:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("ishara", "Select Color for Marker 1:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ishara", "Hue", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ishara", "Min", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ishara", "Max", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ishara", "Saturation", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("ishara", "Max", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("ishara", "Min", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ishara", "Value", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("ishara", "Min", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("ishara", "Max", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("ishara", "Min", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("ishara", "Max", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ishara", "Saturation", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("ishara", "Min", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("ishara", "Max", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ishara", "Hue", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ishara", "Value", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("ishara", "Min", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("ishara", "Max", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(configure_markers), QApplication::translate("ishara", "Configure Markers", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("ishara", "Maximum distance between the center of the markers while pinching:", 0, QApplication::UnicodeUTF8));
        chkEnableRightClick->setText(QApplication::translate("ishara", "Enable Right Click", 0, QApplication::UnicodeUTF8));
        chkEnableLeftClick->setText(QApplication::translate("ishara", "Enable Left Click", 0, QApplication::UnicodeUTF8));
        chkEnableScroll->setText(QApplication::translate("ishara", "Enable Scroll", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("ishara", "Right click delay:", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("ishara", "More Fluid", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("ishara", "Less Fluid", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("ishara", "Movement fluidity:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(settings), QApplication::translate("ishara", "Settings", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("ishara", "&File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("ishara", "&Help", 0, QApplication::UnicodeUTF8));
        menuImage->setTitle(QApplication::translate("ishara", "&Image", 0, QApplication::UnicodeUTF8));
        menuGrab_Frame->setTitle(QApplication::translate("ishara", "Grab Frame", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ishara: public Ui_ishara {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISHARA_H
