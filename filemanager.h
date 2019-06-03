#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QString>
#include <QMainWindow>

class FileManager
{
public:
    FileManager();
    void saveFile(QString str);
    QString getFileData(QString path);
};

#endif // FILEMANAGER_H
