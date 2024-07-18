#pragma once
#include "../Model/Data.h"

//class MainWindow;

class MainWindowController : public QObject
{
    Q_OBJECT

private slots:
    void onNameChanged(const QString &name);
private:
    Data *m_model;
    QString m_name;
public:
    MainWindowController(Data *model, QObject *parent = nullptr);
    QString getName() const;
    void setName(const QString &name);

signals:
    void nameChanged(const QString &name);
};
