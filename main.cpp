#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <QSplashScreen>
void loadModules(QSplashScreen* psplash)
{
    QTime time;
    time.start();

    for (int i = 0; i < 100; ) {
        if (time.elapsed() > 40) {
            time.start();
            ++i;
        }
        psplash->showMessage("Loading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignHCenter | Qt::AlignBottom,
                             Qt::white
                            );
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen splash(QPixmap("C:\\Users\\User\\Documents\\BigLaba\\images\\logo-screen.jpg"));

    splash.show();
    MainWindow w;
    splash.finish(&w);
    w.show();
    LogInAppDialog *dial = new LogInAppDialog(&w);
    if(dial->exec() != QDialog::Accepted)
    {
        delete dial;
        w.close();
        exit(0);
    }
    delete dial;
    return a.exec();
}
