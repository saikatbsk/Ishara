#ifndef ISHARA_H
#define ISHARA_H

#include <QMainWindow>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QSystemTrayIcon>
#include <QHideEvent>
#include <QShowEvent>
#include <QAction>
#include <math.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/videodev2.h>
#include <opencv2/opencv.hpp>
#include "aboutdialog.h"

namespace Ui {
    class ishara;
}

class ishara : public QMainWindow {
    Q_OBJECT

public:
    explicit ishara(QWidget *parent = 0);
    ~ishara();

private:

	void hideEvent(QHideEvent *event);
	void showEvent(QShowEvent *event);

    Ui::ishara *ui;
    cv::VideoCapture capture;

    QTimer *timer;
    QPixmap imgDisplay;

    QAction *maximizeAction;
    QAction *quitAction;
    QAction *startStopAction;
    QMenu *trayIconMenu;
    QSystemTrayIcon *trayIcon;

    cv::Mat src;
    cv::Mat frame;
    cv::Mat imgHSV;

    struct v4l2_capability vidiocap;
    int deviceIndex;
    int fd;
    int CAM_INDEX;
    int mcorInit_X;
    int mcorInit_Y;
    int mcorFinal_X;
    int mcorFinal_Y;
    int msPoint_X;
    int msPoint_Y;
    int xScreenHeight;
    int xScreenWidth;
    int Margin;
    int startEmulation;
    int tmpX;
    int tmpY;
    int waitCount;
    int rightClkCount;
    int smoothFac;
    int pinch;
    int pinchR;
    int ifScrollUp;
    int ifScrollDwn;
    int btnPress;
    int btnRel;
    int hMin1;
    int hMax1;
    int sMin1;
    int sMax1;
    int vMin1;
    int vMax1;
    int hMin2;
    int hMax2;
    int sMin2;
    int sMax2;
    int vMin2;
    int vMax2;
    int linecount;
    int storedval[18];
    bool statusScroll;
    bool statusLClick;
    bool statusRClick;
    int cfgScroll;
    int cfgLClick;
    int cfgRClick;
    int devSelActive;

public slots:
    void startStop();
    void camOpen();
    void processFrameAndUpdateGUI();
    int trackObject(cv::Mat*, int*, int*);
    void getxScreenSize();
    void mouseMap();
    void project();
    void preClick(int*, int*);
    void scrollInit(int*, int*);

private slots:
    void on_btnStartStop_clicked();
    void on_comboSelectCam_currentIndexChanged(int index);
    void on_spnHMin1_valueChanged(int arg1);
    void on_spnHMax1_valueChanged(int arg1);
    void on_spnSMin1_valueChanged(int arg1);
    void on_spnSMax1_valueChanged(int arg1);
    void on_spnVMin1_valueChanged(int arg1);
    void on_spnVMax1_valueChanged(int arg1);
    void on_spnHMin2_valueChanged(int arg1);
    void on_spnHMax2_valueChanged(int arg1);
    void on_spnSMin2_valueChanged(int arg1);
    void on_spnSMax2_valueChanged(int arg1);
    void on_spnVMin2_valueChanged(int arg1);
    void on_spnVMax2_valueChanged(int arg1);
    void on_sliderHMin1_valueChanged(int value);
    void on_sliderHMax1_valueChanged(int value);
    void on_sliderSMin1_valueChanged(int value);
    void on_sliderSMax1_valueChanged(int value);
    void on_sliderVMin1_valueChanged(int value);
    void on_sliderVMax1_valueChanged(int value);
    void on_sliderHMin2_valueChanged(int value);
    void on_sliderHMax2_valueChanged(int value);
    void on_sliderSMin2_valueChanged(int value);
    void on_sliderSMax2_valueChanged(int value);
    void on_sliderVMin2_valueChanged(int value);
    void on_sliderVMax2_valueChanged(int value);
    void on_sliderPinchR_valueChanged(int value);
    void on_spnPinchR_valueChanged(int arg1);
    void on_sliderRCRC_valueChanged(int value);
    void on_spnRCRC_valueChanged(int arg1);
    void on_actionQuit_triggered();
    int on_actionAbout_triggered();
    void on_actionStart_triggered();
    void on_chkEnableScroll_stateChanged(int arg1);
    void on_chkEnableLeftClick_stateChanged(int arg1);
    void on_chkEnableRightClick_stateChanged(int arg1);
	void iconActivated(QSystemTrayIcon::ActivationReason reason);
};

#endif // ISHARA_H
