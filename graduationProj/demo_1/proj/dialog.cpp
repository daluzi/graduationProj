#include "dialog.h"
#include "ui_dialog.h"
#include "QZXing.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_encode_clicked()
{
    QString data = ui->userCnt->text();
//    QString data = "text to be encoded";
    QImage barcode = QZXing::encodeData(data);
//    ui->showImg->setText(barcode)
    qDebug() << barcode << endl;
}

void Dialog::on_decode_clicked()
{

}
