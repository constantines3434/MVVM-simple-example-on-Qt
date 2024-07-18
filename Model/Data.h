#pragma once
#include <QString>
#include <QObject>
#include <QDebug>
class Data: public QObject {
    Q_OBJECT
private:
    QString m_name;

public:
    Data(QObject *parent = nullptr);
    QString getName() const;
    void setName(const QString &name);

signals:
    void nameChanged(const QString &name);
};
