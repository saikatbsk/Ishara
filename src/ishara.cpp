/**
 * *** *** Nothing but some lame decoration ** ***
 *
 * Filename    : ishara.cpp
 * Author      : Saikat Basak
 * License     : GPLv2
 *
 * Description : This is where the fun begins
 *
 * *** *** *** *** *** *** *** *** *** *** *** ***
 */
#include "ishara.h"
#include "ui_ishara.h"
#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>

#include <QDebug>

ishara::ishara(QWidget *parent) : QMainWindow(parent), ui(new Ui::ishara) {

     if (QSystemTrayIcon::isSystemTrayAvailable()) {
    /**
     * Init system tray
     */

	maximizeAction = new QAction(tr("&Show"), this);
	connect(maximizeAction, SIGNAL(triggered()), this, SLOT(show()));

	quitAction = new QAction(tr("&Quit"), this);
	connect(quitAction, SIGNAL(triggered()), this, SLOT(on_actionQuit_triggered()));

	startStopAction = new QAction(tr("S&tart"), this);
	connect(startStopAction, SIGNAL(triggered()), this, SLOT(startStop()));

	trayIconMenu = new QMenu(this);
	trayIconMenu->addAction(maximizeAction);
	trayIconMenu->addSeparator();
	trayIconMenu->addAction(startStopAction);
	trayIconMenu->addSeparator();
	trayIconMenu->addAction(quitAction);

	trayIcon = new QSystemTrayIcon(this);
	trayIcon->setContextMenu(trayIconMenu);

	connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
	const QIcon *icon = new QIcon(":/prefix1/res/ishara.ico");
	trayIcon->setIcon(*icon);

	trayIcon->hide();
     }
    /**
     * Initializing some variables from the configuration file.
	 */
	settings.sync();

	hMin1 = settings.value("hMin1", 0).toInt();
	hMax1 = settings.value("hMax1", 179).toInt();
	sMin1 = settings.value("sMin1", 0).toInt();
	sMax1 = settings.value("sMax1", 255).toInt();
	vMin1 = settings.value("vMin1", 0).toInt();
	vMax1 = settings.value("vMax1", 255).toInt();

	hMin2 = settings.value("hMin2", 0).toInt();
	hMax2 = settings.value("hMax2", 179).toInt();
	sMin2 = settings.value("sMin2", 0).toInt();
	sMax2 = settings.value("sMax2", 255).toInt();
	vMin2 = settings.value("vMin2", 0).toInt();
	vMax2 = settings.value("vMax2", 255).toInt();

	pinchR = settings.value("pinchR", 66).toInt();
	rightClkCount = settings.value("rightClkCount", 20).toInt();
	smoothFac = settings.value("smoothFac", 8).toInt();

	cfgScroll = settings.value("cfgScroll", 2).toInt();
	cfgLClick = settings.value("cfgLClick", 2).toInt();
	cfgRClick = settings.value("cfgRClick", 2).toInt();

    /**
     * Initializing some more variables.
     */
    CAM_INDEX = -1;
    mcorInit_X = 0;
    mcorInit_Y = 0;
    msPoint_X = 0;
    msPoint_Y = 0;
    xScreenHeight = 0;
    xScreenWidth = 0;
    Margin = 100;
    startEmulation = 0;
    tmpX = 0;
    tmpY = 0;
    waitCount = 0;
    pinch = 0;
    ifScrollUp = 0;
    ifScrollDwn = 0;
    btnPress = 1;
    btnRel = 1;
    devSelActive = 0;

    /**
     * Setting up the user interface.
     */
    ui->setupUi(this);

    /**
     * Setting up smoothness factor slider. Smoothness factor is the maximum allowable
     * distance the index finger can move without effecting any change in the mouse
     * cursor position. A reasonable value for this would be 6 to 8 depending on the user.
     */
    ui->sliderSmoothFac->setRange(2, 12);
    ui->sliderSmoothFac->setValue(smoothFac);

    /**
     * Setting up color selection sliders. The HSV range for the two color markers to be
     * detected are set using these sliders.
     */
    ui->sliderHMin1->setRange(0, 179);
    ui->sliderHMax1->setRange(0, 179);
    ui->sliderSMin1->setRange(0, 255);
    ui->sliderSMax1->setRange(0, 255);
    ui->sliderVMin1->setRange(0, 255);
    ui->sliderVMax1->setRange(0, 255);

    ui->sliderHMin2->setRange(0, 179);
    ui->sliderHMax2->setRange(0, 179);
    ui->sliderSMin2->setRange(0, 255);
    ui->sliderSMax2->setRange(0, 255);
    ui->sliderVMin2->setRange(0, 255);
    ui->sliderVMax2->setRange(0, 255);

    ui->sliderHMin1->setValue(hMin1);
    ui->sliderHMax1->setValue(hMax1);
    ui->sliderSMin1->setValue(sMin1);
    ui->sliderSMax1->setValue(sMax1);
    ui->sliderVMin1->setValue(vMin1);
    ui->sliderVMax1->setValue(vMax1);

    ui->sliderHMin2->setValue(hMin2);
    ui->sliderHMax2->setValue(hMax2);
    ui->sliderSMin2->setValue(sMin2);
    ui->sliderSMax2->setValue(sMax2);
    ui->sliderVMin2->setValue(vMin2);
    ui->sliderVMax2->setValue(vMax2);
    /**
     * Setting up color selection spinboxes. The values determining the HSV range can
     * also be altered using the spin boxes.
     */
    ui->spnHMin1->setRange(0, 179);
    ui->spnHMax1->setRange(0, 179);
    ui->spnSMin1->setRange(0, 255);
    ui->spnSMax1->setRange(0, 255);
    ui->spnVMin1->setRange(0, 255);
    ui->spnVMax1->setRange(0, 255);

    ui->spnHMin2->setRange(0, 179);
    ui->spnHMax2->setRange(0, 179);
    ui->spnSMin2->setRange(0, 255);
    ui->spnSMax2->setRange(0, 255);
    ui->spnVMin2->setRange(0, 255);
    ui->spnVMax2->setRange(0, 255);

    ui->spnHMin1->setValue(hMin1);
    ui->spnHMax1->setValue(hMax1);
    ui->spnSMin1->setValue(sMin1);
    ui->spnSMax1->setValue(sMax1);
    ui->spnVMin1->setValue(vMin1);
    ui->spnVMax1->setValue(vMax1);

    ui->spnHMin2->setValue(hMin2);
    ui->spnHMax2->setValue(hMax2);
    ui->spnSMin2->setValue(sMin2);
    ui->spnSMax2->setValue(sMax2);
    ui->spnVMin2->setValue(vMin2);
    ui->spnVMax2->setValue(vMax2);

    /**
     * Setting up pinchR slider. The pinchR variable determines the maximum distance
     * between the center co-ordinates of the two color markers when detecting a Pinch.
     */
    ui->sliderPinchR->setRange(10, 120);
    ui->sliderPinchR->setValue(pinchR);
    /**
     * Setting up pinchR spinbox. The value of pinchR can also be altered using a spinbox.
     */
    ui->spnPinchR->setRange(10, 120);
    ui->spnPinchR->setValue(pinchR);

    /**
     * Setting up rightClkCount slider. The variable rightClkCount
     * determines the loop count while determining a right click.
     */
    ui->sliderRCRC->setRange(10, 30);
    ui->sliderRCRC->setValue(rightClkCount);
    /**
     * Setting up rightClkCount spinbox, the usage is obvious.
     */
    ui->spnRCRC->setRange(10, 30);
    ui->spnRCRC->setValue(rightClkCount);

    /**
     * Setting up check boxes to enable/disable functionalities.
     */
    if(cfgScroll > 0) {
        ui->chkEnableScroll->setChecked(true);
    }
    else {
        ui->chkEnableScroll->setChecked(false);
    }

    if(cfgLClick > 0) {
        ui->chkEnableLeftClick->setChecked(true);
    }
    else {
        ui->chkEnableLeftClick->setChecked(false);
    }

    if(cfgRClick > 0) {
        ui->chkEnableRightClick->setChecked(true);
    }
    else {
        ui->chkEnableRightClick->setChecked(false);
    }

    /**
     * Camera selection in Linux.
     */
    for(deviceIndex = 0 ; deviceIndex < 64 ; ++deviceIndex) {
        QString device = "/dev/video" + QString::number(deviceIndex);
        QByteArray array = device.toLocal8Bit();
        char *buffer = array.data();
        if((fd = open(buffer, O_RDONLY)) != -1) {
            if(ioctl(fd, VIDIOC_QUERYCAP, &vidiocap) == -1) {
                ui->comboSelectCam->addItem(device);
            }
            else {
                ui->comboSelectCam->addItem(QString::fromLocal8Bit(reinterpret_cast<const char*>(vidiocap.card)));
            }
            if(CAM_INDEX == -1) {
                CAM_INDEX = deviceIndex;
            }
        }
    }

    /**
     * Camera operations.
     */
    camOpen();

    capture.read(src);
    if(src.empty() == true) {
        ui->statusBar->showMessage("Read error!");
        return;
    }

    /**
     * Time warp.
     */
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(processFrameAndUpdateGUI()));
    timer->start(20);

    /**
     * Clean up the crap.
     */
    src.release();
    frame.release();
    imgHSV.release();
}

ishara::~ishara() {

	hMin1 = ui->sliderHMin1->value();
    hMax1 = ui->sliderHMax1->value();
    sMin1 = ui->sliderSMin1->value();
    sMax1 = ui->sliderSMax1->value();
    vMin1 = ui->sliderVMin1->value();
    vMax1 = ui->sliderVMax1->value();

    hMin2 = ui->sliderHMin2->value();
    hMax2 = ui->sliderHMax2->value();
    sMin2 = ui->sliderSMin2->value();
    sMax2 = ui->sliderSMax2->value();
    vMin2 = ui->sliderVMin2->value();
    vMax2 = ui->sliderVMax2->value();

	smoothFac = ui->sliderSmoothFac->value();
    pinchR = ui->sliderPinchR->value();
    rightClkCount = ui->sliderRCRC->value();


	delete ui;

	settings.setValue("hMin1", hMin1);
	settings.setValue("hMax1", hMax1);
	settings.setValue("sMin1", sMin1);
	settings.setValue("sMax1", sMax1);
	settings.setValue("vMin1", vMin1);
	settings.setValue("vMax1", vMax1);

	settings.setValue("hMin2", hMin2);
	settings.setValue("hMax2", hMax2);
	settings.setValue("sMin2", sMin2);
	settings.setValue("sMax2", sMax2);
	settings.setValue("vMin2", vMin2);
	settings.setValue("vMax2", vMax2);

	settings.setValue("pinchR", pinchR);
	settings.setValue("rightClkCount", rightClkCount);
	settings.setValue("smoothFac", smoothFac);

	settings.setValue("cfgScroll", cfgScroll);
	settings.setValue("cfgLClick", cfgLClick);
	settings.setValue("cfgRClick", cfgRClick);

	settings.sync();
}

void ishara::processFrameAndUpdateGUI() {
    cv::Mat imgThresh1;
    cv::Mat imgThresh2;

    int pos_x1 = 0;
    int pos_y1 = 0;
    int pos_x2 = 0;
    int pos_y2 = 0;

    hMin1 = ui->sliderHMin1->value();
    hMax1 = ui->sliderHMax1->value();
    sMin1 = ui->sliderSMin1->value();
    sMax1 = ui->sliderSMax1->value();
    vMin1 = ui->sliderVMin1->value();
    vMax1 = ui->sliderVMax1->value();

    hMin2 = ui->sliderHMin2->value();
    hMax2 = ui->sliderHMax2->value();
    sMin2 = ui->sliderSMin2->value();
    sMax2 = ui->sliderSMax2->value();
    vMin2 = ui->sliderVMin2->value();
    vMax2 = ui->sliderVMax2->value();

    smoothFac = ui->sliderSmoothFac->value();
    pinchR = ui->sliderPinchR->value();
    rightClkCount = ui->sliderRCRC->value();

    capture.read(src);

    /**
     * Flip the initial image and convert to RGB as opencv would read images in BGR format.
     */
    cv::flip(src, frame, 1);
    cv::cvtColor(frame, frame, CV_BGR2RGB);

    /**
     * Converting the image to HSV.
     */
    cv::cvtColor(frame, imgHSV, CV_BGR2HSV);

    /**
     * Identifying the color markers used in the index finger.
     */
    cv::inRange(imgHSV,
                cv::Scalar(hMin1, sMin1, vMin1),
                cv::Scalar(hMax1, sMax1, vMax1),
                imgThresh1);
    openingOperation(&imgThresh1);
    trackObject(&imgThresh1, &pos_x1, &pos_y1);

    /**
     * Identifying the color markers used in the index thumb.
     */
    cv::inRange(imgHSV,
                cv::Scalar(hMin2, sMin2, vMin2),
                cv::Scalar(hMax2, sMax2, vMax2),
                imgThresh2);
    openingOperation(&imgThresh2);
    trackObject(&imgThresh2, &pos_x2, &pos_y2);

    /**
     * Draw the effective region.
     */
    cv::Rect rec(Margin, Margin, frame.cols - (2 * Margin), frame.rows - (2 * Margin));
    cv::rectangle(frame, rec, cv::Scalar(0, 0, 255), 1, 8, 0);
    cv::putText(frame, "Move index finger inside the box.", cv::Point(Margin + 20, Margin + 20), CV_FONT_HERSHEY_PLAIN, 1, cv::Scalar(0, 0, 255), 1, 8, false);

    mcorInit_X = pos_x1;
    mcorInit_Y = pos_y1;

    if(mcorInit_X + mcorInit_Y) {
        if(startEmulation == 1) {
            Display *display = XOpenDisplay(0);
            if(!display) {
                ui->statusBar->showMessage("Error opening display!");
                return;
            }

            Window root = DefaultRootWindow(display);
            if(!root) {
                ui->statusBar->showMessage("Root window not found!");
                return;
            }

            /**
             * Map and move mouse pointer on screen.
             */
            getxScreenSize();
            mouseMap();
            XTestFakeMotionEvent(display, DefaultScreen(display), mcorFinal_X, mcorFinal_Y, 0);

            if(pos_x2 + pos_y2) {
                if(tmpX == mcorFinal_X && tmpY == mcorFinal_Y)
                    ++waitCount;
                else {
                    tmpX = 0;
                    tmpY = 0;
                    waitCount = 0;
                }

                /**
                 * Right click.
                 */
                if(ui->chkEnableRightClick->isChecked() == true) {
                    if(waitCount == rightClkCount && (ifScrollUp != 1 && ifScrollDwn != 1) && pinch != 1) {
                        XTestFakeButtonEvent(display, 3, 1, 1);
                        XTestFakeButtonEvent(display, 3, 0, 1);
                        tmpX = 0;
                        tmpY = 0;
                        waitCount = 0;
                    }
                }

                tmpX = mcorFinal_X;
                tmpY = mcorFinal_Y;

                preClick(&pos_x2, &pos_y2);

                /**
                 * Scroll.
                 */
                if(ui->chkEnableScroll->isChecked() == true) {
                    scrollInit(&pos_x2, &pos_y2);
                    if(ifScrollUp == 1) {
                        XTestFakeButtonEvent(display, 4, 1, 10);
                        XTestFakeButtonEvent(display, 4, 0, 10);
                    }
                    if(ifScrollDwn == 1) {
                        XTestFakeButtonEvent(display, 5, 1, 10);
                        XTestFakeButtonEvent(display, 5, 0, 10);
                    }
                }

                /**
                 * Left click.
                 */
                if(ui->chkEnableLeftClick->isChecked() == true) {
                    cv::circle(frame, cv::Point(mcorInit_X, mcorInit_Y), pinchR, cv::Scalar(0, 0, 255));
                    if(pinch == 1) {
                        if(btnPress == 1) {
                            XTestFakeButtonEvent(display, 1, 1, 1);
                            btnPress = 0;
                            btnRel = 1;
                        }
                    }
                    else{
                        if(btnRel == 1) {
                            XTestFakeButtonEvent(display, 1, 0, 1);
                            btnRel = 0;
                        }
                        else
                            btnPress = 1;
                    }
                }
            }

            XFlush(display);
            XCloseDisplay(display);
        }
    }

    /**
     * Display images.
     */
    QImage qImgDisplay((uchar*)frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
    ui->lblDisplayClean->setPixmap(imgDisplay.fromImage(qImgDisplay).scaledToHeight(480, Qt::FastTransformation));

    QImage qImgDisplayThresh1((uchar*)imgThresh1.data, imgThresh1.cols, imgThresh1.rows, imgThresh1.step, QImage::Format_Indexed8);
    ui->lblConfigureLeft->setPixmap(imgDisplay.fromImage(qImgDisplayThresh1).scaledToHeight(236, Qt::FastTransformation));

    QImage qImgDisplayThresh2((uchar*)imgThresh2.data, imgThresh2.cols, imgThresh2.rows, imgThresh2.step, QImage::Format_Indexed8);
    ui->lblConfigureRight->setPixmap(imgDisplay.fromImage(qImgDisplayThresh2).scaledToHeight(236, Qt::FastTransformation));

    /**
     * Clean up the crap.
     */
    imgThresh1.release();
    imgThresh2.release();
}

void ishara::openingOperation(cv::Mat *image) {
    cv::erode(*image, *image, cv::Mat(), cv::Point(-1, -1), 2, 1, 1);
    cv::dilate(*image, *image, cv::Mat(), cv::Point(-1, -1), 2, 1, 1);
}

int ishara::trackObject(cv::Mat *imgThresh, int *posx, int *posy) {
    cv::Moments moment;
    moment = moments(*imgThresh);

    /**
     * moment10 = 1st order spatial moment around x-axis
     * moment01 = 1st order spatial moment around y-axis
     * moment00 = 0th order central moment
     */
    double moment10 = moment.m10;
    double moment01 = moment.m01;
    double moment00 = moment.m00;

    if(moment00 > 20000 && moment00 < 20000000) {
        *posx = moment10 / moment00;
        *posy = moment01 / moment00;

        return 1;
    }
    else
        return 0;
}

void ishara::getxScreenSize() {
    Display *display = XOpenDisplay(0);
    if(!display) {
        ui->statusBar->showMessage("Error opening display!");
        return;
    }

    Screen *screen = DefaultScreenOfDisplay(display);
    if(!screen) {
        ui->statusBar->showMessage("Screen not found!");
        return;
    }

    xScreenWidth = screen -> width;
    xScreenHeight = screen -> height;

    XCloseDisplay(display);
}

void::ishara::mouseMap() {
    int msFlag = 0;

    int dx = pow((msPoint_X - mcorInit_X), 2);
    int dy = pow((msPoint_Y - mcorInit_Y), 2);
    int r2 = pow(smoothFac, 2);

    if((dx + dy) >= r2)
        msFlag = 1;
    else
        msFlag = 0;

    if(msFlag == 1) {
        msPoint_X = mcorInit_X;
        msPoint_Y = mcorInit_Y;

        msFlag = 0;
    }

    project();

    cv::circle(frame, cv::Point(msPoint_X, msPoint_Y), smoothFac, cv::Scalar(0, 255, 0));
    cv::circle(frame, cv::Point(msPoint_X, msPoint_Y), 2, cv::Scalar(0, 255, 0));
    cv::circle(frame, cv::Point(mcorInit_X, mcorInit_Y), 2, cv::Scalar(255, 0, 0));
}

void::ishara::project() {
    if(msPoint_X > Margin && msPoint_Y > Margin && msPoint_X < (frame.cols - Margin) && msPoint_Y < (frame.rows - Margin)) {
        float ratio_w = float(xScreenWidth) / float(frame.cols - (2 * Margin));
        mcorFinal_X = (msPoint_X - Margin) * ratio_w;

        float ratio_h = float(xScreenHeight) / float(frame.rows - (2 * Margin));
        mcorFinal_Y = (msPoint_Y - Margin) * ratio_h;
    }
}

void ishara::on_btnStartStop_clicked() {
    startStop();
}

void::ishara::preClick(int *x, int *y) {
    pinch = 0;
    int origR = sqrt(pow((*x - mcorInit_X), 2) + pow((*y - mcorInit_Y), 2));

    cv::circle(frame, cv::Point(*x, *y), 2, cv::Scalar(0, 0, 255));

    if(origR < pinchR)
        pinch = 1;
    else
        pinch = 0;
}

void::ishara::scrollInit(int *x, int *y) {
    cv::line(frame, cv::Point(msPoint_X, msPoint_Y), cv::Point(frame.cols, msPoint_Y), cv::Scalar(0, 255, 0), 2, 4);

    cv::line(frame, cv::Point(msPoint_X, msPoint_Y), cv::Point(msPoint_X, 0), cv::Scalar(0, 255, 0), 2, 4);
    if(*x > msPoint_X && *y < msPoint_Y && pinch != 1)
        ifScrollUp = 1;
    else
        ifScrollUp = 0;

    cv::line(frame, cv::Point(msPoint_X, msPoint_Y), cv::Point(msPoint_X, frame.rows), cv::Scalar(0, 255, 0), 2, 4);
    if(*x > msPoint_X && *y > msPoint_Y && pinch != 1)
        ifScrollDwn = 1;
    else
        ifScrollDwn = 0;
}

void ishara::on_spnHMin1_valueChanged(int arg1) {
    ui->sliderHMin1->setValue(arg1);
}

void ishara::on_spnHMax1_valueChanged(int arg1) {
    ui->sliderHMax1->setValue(arg1);
}

void ishara::on_spnSMin1_valueChanged(int arg1) {
    ui->sliderSMin1->setValue(arg1);
}

void ishara::on_spnSMax1_valueChanged(int arg1) {
    ui->sliderSMax1->setValue(arg1);
}

void ishara::on_spnVMin1_valueChanged(int arg1) {
    ui->sliderVMin1->setValue(arg1);
}

void ishara::on_spnVMax1_valueChanged(int arg1) {
    ui->sliderVMax1->setValue(arg1);
}

void ishara::on_spnHMin2_valueChanged(int arg1) {
    ui->sliderHMin2->setValue(arg1);
}

void ishara::on_spnHMax2_valueChanged(int arg1) {
    ui->sliderHMax2->setValue(arg1);
}

void ishara::on_spnSMin2_valueChanged(int arg1) {
    ui->sliderSMin2->setValue(arg1);
}

void ishara::on_spnSMax2_valueChanged(int arg1) {
    ui->sliderSMax2->setValue(arg1);
}

void ishara::on_spnVMin2_valueChanged(int arg1) {
    ui->sliderVMin2->setValue(arg1);
}

void ishara::on_spnVMax2_valueChanged(int arg1) {
    ui->sliderVMax2->setValue(arg1);
}

void ishara::on_sliderHMin1_valueChanged(int value) {
    ui->spnHMin1->setValue(value);
}

void ishara::on_sliderHMax1_valueChanged(int value) {
    ui->spnHMax1->setValue(value);
}

void ishara::on_sliderSMin1_valueChanged(int value) {
    ui->spnSMin1->setValue(value);
}

void ishara::on_sliderSMax1_valueChanged(int value) {
    ui->spnSMax1->setValue(value);
}

void ishara::on_sliderVMin1_valueChanged(int value) {
    ui->spnVMin1->setValue(value);
}

void ishara::on_sliderVMax1_valueChanged(int value) {
    ui->spnVMax1->setValue(value);
}

void ishara::on_sliderHMin2_valueChanged(int value) {
    ui->spnHMin2->setValue(value);
}

void ishara::on_sliderHMax2_valueChanged(int value) {
    ui->spnHMax2->setValue(value);
}

void ishara::on_sliderSMin2_valueChanged(int value) {
    ui->spnSMin2->setValue(value);
}

void ishara::on_sliderSMax2_valueChanged(int value) {
    ui->spnSMax2->setValue(value);
}

void ishara::on_sliderVMin2_valueChanged(int value) {
    ui->spnVMin2->setValue(value);
}

void ishara::on_sliderVMax2_valueChanged(int value) {
    ui->spnVMax2->setValue(value);
}

void ishara::on_sliderPinchR_valueChanged(int value) {
    ui->spnPinchR->setValue(value);
}

void ishara::on_spnPinchR_valueChanged(int arg1) {
    ui->sliderPinchR->setValue(arg1);
}

void ishara::on_sliderRCRC_valueChanged(int value) {
    ui->spnRCRC->setValue(value);
}

void ishara::on_spnRCRC_valueChanged(int arg1) {
    ui->sliderRCRC->setValue(arg1);
}

void ishara::on_actionQuit_triggered() {
    QApplication::quit();
}

int ishara::on_actionAbout_triggered() {
    AboutDialog about;
    about.show();

    return about.exec();
}

void ishara::on_actionStart_triggered() {
    startStop();
}

void ishara::startStop() {
    if(startEmulation == 0) {
        startEmulation = 1;
	if (QSystemTrayIcon::isSystemTrayAvailable()) {
	    startStopAction->setText("S&top");
	}
        ui->btnStartStop->setText("Stop");
        ui->actionStart->setText("Stop");
    }
    else {
        startEmulation = 0;
	if (QSystemTrayIcon::isSystemTrayAvailable()) {
	    startStopAction->setText("S&tart");
	}
        ui->btnStartStop->setText("Start");
        ui->actionStart->setText("Start");
    }
}

void ishara::on_comboSelectCam_currentIndexChanged(int index)
{
    if(devSelActive == 0) {
        devSelActive = 1;
    }
    else {
        CAM_INDEX = index;
        capture.release();
        camOpen();
    }
}

void ishara::camOpen() {
    capture.open(CAM_INDEX);
    if(capture.isOpened() == false) {
        ui->statusBar->showMessage("Error opening camera!");
        return;
    }
}

void ishara::on_chkEnableScroll_stateChanged(int arg1) {
    cfgScroll = arg1;
}

void ishara::on_chkEnableLeftClick_stateChanged(int arg1) {
    cfgLClick = arg1;
}

void ishara::on_chkEnableRightClick_stateChanged(int arg1) {
    cfgRClick = arg1;
}

void ishara::iconActivated(QSystemTrayIcon::ActivationReason reason) {
    if( reason == QSystemTrayIcon::DoubleClick) {
		trayIcon->hide();
		show();
	}
}

void ishara::hideEvent(QHideEvent *event) {
	trayIcon->show();
	event->accept();
}

void ishara::showEvent(QShowEvent *event) {
	trayIcon->hide();
	event->accept();
}
