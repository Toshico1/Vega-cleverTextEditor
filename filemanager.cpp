#include "filemanager.h"
#include <QFile>
#include <QTextStream>
FileManager::FileManager()
{

}
void FileManager::saveFile(QString str, QString data){

    QFile file(str);
    file.open(QIODevice::WriteOnly);
    QTextStream stream(&file);
    stream << data;
    file.close();
    //ui->label_info->setText("New file created");
}

QString FileManager::getFileData(QString path)
{
    QFile file(path);
    file.open(QIODevice::ReadWrite);
    return(file.readAll());
}
