#ifndef HELPBROWSER_H
#define HELPBROWSER_H

#include <QtWidgets/QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QTextBrowser>
#pragma comment(lib, "Qt5Widgets.lib")
#include <QtEvents>

// ======================================================================
class HelpBrowser : public QWidget {
    Q_OBJECT

public:
    HelpBrowser(const QString& strPath, 
                const QString& strFileName, 
                      QWidget* pwgt = nullptr
               ) : QWidget(pwgt) 
    {
        QPushButton*  pcmdBack    = new QPushButton("<<");
        QPushButton*  pcmdHome    = new QPushButton("Home");
        QPushButton*  pcmdForward = new QPushButton(">>");
        QPushButton*  pcmdClose = new QPushButton("Закрыть");
        QTextBrowser* ptxtBrowser = new QTextBrowser;

        connect(pcmdBack, SIGNAL(clicked()), ptxtBrowser, SLOT(backward()));
        connect(pcmdHome, SIGNAL(clicked()), ptxtBrowser, SLOT(home()));
        connect(pcmdForward, SIGNAL(clicked()), ptxtBrowser, SLOT(forward()));
        connect(ptxtBrowser, SIGNAL(backwardAvailable(bool)), pcmdBack, SLOT(setEnabled(bool)));
        connect(ptxtBrowser, SIGNAL(forwardAvailable(bool)), pcmdForward, SLOT(setEnabled(bool)));
        connect(pcmdClose, SIGNAL(clicked()), this, SLOT(close()));

        ptxtBrowser->setSearchPaths(QStringList() << strPath);
        ptxtBrowser->setSource(QString(strFileName));

        //Layout setup
        QVBoxLayout* pvbxLayout = new QVBoxLayout;
        QHBoxLayout* phbxLayout = new QHBoxLayout;
        phbxLayout->addWidget(pcmdBack);
        phbxLayout->addWidget(pcmdHome);
        phbxLayout->addWidget(pcmdForward);
        pvbxLayout->addLayout(phbxLayout);    
        pvbxLayout->addWidget(ptxtBrowser);
        pvbxLayout->addWidget(pcmdClose);
        setLayout(pvbxLayout);
    }

protected:
    virtual void closeEvent(QCloseEvent *event)
    {
        delete this;
        event->accept();
    }
};

#endif  //HELPBROWSER_H
