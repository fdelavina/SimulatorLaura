#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_mainWindow(new Ui::MainWindow)
{
    ui_mainWindow->setupUi(this);

    setConnect();
}

MainWindow::~MainWindow()
{
    delete ui_mainWindow;
}

void MainWindow::setConnect()
{
    //connects materials
    connect(ui_mainWindow->btn_set_materials    , SIGNAL(clicked(bool)), this, SLOT(setMaterialClickBtn  ()));
    connect(ui_mainWindow->btn_create_materials , SIGNAL(clicked(bool)), this, SLOT(createMaterialClickBtn  ()));
    connect(ui_mainWindow->btn_remove_materials , SIGNAL(clicked(bool)), this, SLOT(deleteMaterialClickBtn  ()));
    connect(ui_mainWindow->btn_plot_materials   , SIGNAL(clicked(bool)), this, SLOT(plotMaterialClickBtn  ()));
}

void MainWindow::setMaterialClickBtn()
{
    MaterialSet m_matSet;
    m_matSet.setModal(true);
    m_matSet.exec();
}

void MainWindow::createMaterialClickBtn()
{
    MaterialCreate m_matCreate;
    m_matCreate.setModal(true);
    m_matCreate.exec();
}

void MainWindow::deleteMaterialClickBtn()
{
    MaterialDelete m_matDelete;
    m_matDelete.setModal(true);
    m_matDelete.exec();
}

void MainWindow::plotMaterialClickBtn()
{
    MaterialPlot m_matPlot;
    m_matPlot.setModal(true);
    m_matPlot.exec();
}

