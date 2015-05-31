#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

namespace Ui {
    class AboutDialog;
}

class AboutDialog : public QDialog {
    Q_OBJECT

    public:
        explicit AboutDialog(QWidget *parent = 0);
        ~AboutDialog();

        private slots:
            void on_btnCloseDialog_clicked();

    private:
        Ui::AboutDialog *ui;

        QPixmap imgIcon;
};

#endif // ABOUTDIALOG_H
