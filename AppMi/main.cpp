#include <iostream>
#include <string>

#include <QApplication>
#include <QSplashScreen>
#include "LauraUtils/Matrices/dvrmatrix.h"

#include "LauraGUI/MainWindow/mainwindow.h"
//#include "dvrfunctionsparametersand2values.h"
//#include "rectangle.h"
//#include "dvrpolinomial.h"
//#include "matelectricproperty.h"

void ApplyStyles();

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    app.setQuitOnLastWindowClosed(true);

    MainWindow mywindow;
    ApplyStyles();
    QPixmap pixmap(":images/Laura.JPG");
    QSplashScreen splash(pixmap);
    splash.show();
    app.processEvents();
    QString padding1 = QString(std::string(50, ' ').c_str()); //this is bad, why don't you fix it already?
    QString padding2 = "\n";
    splash.showMessage(padding1 + "Loading Application Settings..." + padding2, Qt::AlignBottom, Qt::white);

    splash.showMessage(padding1 + "Loading settings..." + padding2, Qt::AlignBottom, Qt::white);
    splash.showMessage(padding1 + "Loading plugins..." + padding2, Qt::AlignBottom, Qt::white);
    splash.showMessage(padding1 + "Loading scripting settings..." + padding2, Qt::AlignBottom, Qt::white);


    splash.finish(&mywindow);
    mywindow.showMaximized();
    //mainWindow.setWindowState(Qt::WindowMaximized);

    //mywindow.show();

    return app.exec();



    return 0;
}

void ApplyStyles()
{
    qApp->setStyle("Fusion");

    QFont font("Calibri");
    font.setPointSize(10);
    QApplication::setFont(font);

    auto selectionColor = QApplication::palette("QTableWidgetItem").color(QPalette::Active, QPalette::Highlight).name();
    qApp->setStyleSheet("QTreeView::item:selected:!active { color:white; background:" + selectionColor + "; }"
                        "QTreeView::item:selected:active { color:white; background:" + selectionColor + "; }"
                        "QTreeView { selection-background-color:" + selectionColor + "; }"
                        "QTableView::item:selected:!active { color:white; background:" + selectionColor + "; }"
                        "QTableView::item:selected:active { color:white; background:" + selectionColor + "; }"
                        "QTableView { selection-background-color:" + selectionColor + "; }");
}


