#include "dialog.h"
#include <QApplication>
#include <QZXing.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();

//    QImage imageToDecode("file.png");
//    QZXing decoder;
//    decoder.setDecoder( DecoderFormat_QR_CODE | DecoderFormat_EAN_13 );
//    QString result = decoder.decodeImage(imageToDecode);
//    QString data = "encode text";
//    QImage barcode = QZXing::encodeData(data);

    return a.exec();
}
