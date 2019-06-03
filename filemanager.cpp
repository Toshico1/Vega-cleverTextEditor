#include "filemanager.h"
#include <QFile>
FileManager::FileManager()
{

}
void FileManager::saveFile(QString str){

    QFile file(str);
    file.open(QIODevice::WriteOnly);
    file.close();
    //ui->label_info->setText("New file created");
}

QString FileManager::getFileData(QString path)
{
    QFile file(path);
    file.open(QIODevice::ReadWrite);
    return(file.readAll());
}
