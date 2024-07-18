#include "MainWindowController.h"

MainWindowController::MainWindowController(Data *model, QObject *parent)
    : QObject(parent), m_model(model)  {
    connect(m_model, &Data::nameChanged, this, &MainWindowController::onNameChanged);
}

QString MainWindowController::getName() const
{
    return m_model->getName();
}

void MainWindowController::setName(const QString &name)
{
    m_model->setName(name);
}

void MainWindowController::onNameChanged(const QString &name)
{
    emit nameChanged(name);
}
