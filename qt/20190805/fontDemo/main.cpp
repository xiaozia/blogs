#include "widget.h"
#include <QApplication>

#include <QFontDatabase>
#include <QIODevice>
#include <QFile>
#include <QDebug>

QString loadFontFamilyFromFiles(const QString &fontFileName)
{
    QString font = "";

    QFile fontFile(fontFileName);
    if(!fontFile.open(QIODevice::ReadOnly))
    {
        qDebug()<<"Open font file error";
        return font;
    }

    int loadedFontID = QFontDatabase::addApplicationFontFromData(fontFile.readAll());
    QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);
    if(!loadedFontFamilies.empty())
    {
        font = loadedFontFamilies.at(0);
    }
    fontFile.close();
    return font;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    //指定的字体文件路径和字体文件名
    QString strFont0 =  loadFontFamilyFromFiles("F:\\github_blogs\\qt\\20190805\\fontDemo\\fonts\\PingFangRegular.ttf");
    qDebug() << "strFont0 is: " << strFont0;

    //指定的字体文件路径和字体文件名
    QString strFont1 =  loadFontFamilyFromFiles("F:\\github_blogs\\qt\\20190805\\fontDemo\\fonts\\PingFangMedium.ttf");
    qDebug() << "strFont1 is: " << strFont1;

    //指定的字体文件路径和字体文件名
    QString strFont2 =  loadFontFamilyFromFiles("F:\\github_blogs\\qt\\20190805\\fontDemo\\fonts\\PingFangBold.ttf");
    qDebug() << "strFont2 is: " << strFont2;

//    if(strFont.isEmpty())
//    {
//        qDebug() <<"Error";
//    }
//    else
//    {
//        qDebug() << "load font success!";
//    }

    return a.exec();
}
