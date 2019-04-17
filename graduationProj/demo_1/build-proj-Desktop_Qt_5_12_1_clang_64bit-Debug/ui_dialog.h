/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTableView *tableView;
    QLineEdit *linehead;
    QFrame *frame;
    QPushButton *encode;
    QToolButton *toolButton;
    QPushButton *decode;
    QLineEdit *userCnt;
    QTextEdit *showImg;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        tableView = new QTableView(Dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 401, 301));
        tableView->setAutoFillBackground(false);
        linehead = new QLineEdit(Dialog);
        linehead->setObjectName(QString::fromUtf8("linehead"));
        linehead->setGeometry(QRect(0, 0, 401, 40));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(linehead->sizePolicy().hasHeightForWidth());
        linehead->setSizePolicy(sizePolicy);
        linehead->setSizeIncrement(QSize(0, 0));
        linehead->setBaseSize(QSize(0, 0));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        linehead->setFont(font);
        linehead->setLayoutDirection(Qt::LeftToRight);
        linehead->setMaxLength(32782);
        linehead->setCursorPosition(10);
        linehead->setAlignment(Qt::AlignCenter);
        linehead->setReadOnly(true);
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 40, 151, 261));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        encode = new QPushButton(frame);
        encode->setObjectName(QString::fromUtf8("encode"));
        encode->setGeometry(QRect(20, 90, 110, 34));
        toolButton = new QToolButton(frame);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(28, 150, 95, 26));
        decode = new QPushButton(frame);
        decode->setObjectName(QString::fromUtf8("decode"));
        decode->setGeometry(QRect(21, 200, 109, 33));
        userCnt = new QLineEdit(frame);
        userCnt->setObjectName(QString::fromUtf8("userCnt"));
        userCnt->setGeometry(QRect(27, 40, 98, 26));
        QFont font1;
        font1.setPointSize(14);
        userCnt->setFont(font1);
        showImg = new QTextEdit(Dialog);
        showImg->setObjectName(QString::fromUtf8("showImg"));
        showImg->setGeometry(QRect(170, 60, 211, 221));
        showImg->setLayoutDirection(Qt::LeftToRight);
        showImg->setReadOnly(false);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        linehead->setText(QApplication::translate("Dialog", "qrcode-Sec", nullptr));
        encode->setText(QApplication::translate("Dialog", "encode", nullptr));
        toolButton->setText(QApplication::translate("Dialog", "choose a file", nullptr));
        decode->setText(QApplication::translate("Dialog", "decode", nullptr));
        userCnt->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
