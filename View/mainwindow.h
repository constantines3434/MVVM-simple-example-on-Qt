#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include "../ViewModel/MainWindowController.h"
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindowController;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(MainWindowController *viewModel, QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    MainWindowController *m_viewModel;
private slots:
    void onUpdateButtonClicked();
};
#endif // MAINWINDOW_H
