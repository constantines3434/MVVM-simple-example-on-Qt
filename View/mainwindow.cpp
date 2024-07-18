#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(MainWindowController *controller, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), m_viewModel(controller) {
    ui->setupUi(this);

    connect(ui->EventButton, &QPushButton::clicked, this, &MainWindow::onUpdateButtonClicked);
    connect(m_viewModel, &MainWindowController::nameChanged, this, [this](const QString &name){
        ui->SecondTextEdit->setText(name);
    });
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onUpdateButtonClicked() {
    QString text = ui->FirstTextEdit->toPlainText();
    m_viewModel->setName(text);
}
