#include "Data.h"

Data::Data(QObject *parent) {

}
QString Data::getName() const
{
    return m_name;
}

void Data::setName(const QString &name)
{
    if (m_name != name) {
        m_name = name;
        emit nameChanged(name);
    }
}


