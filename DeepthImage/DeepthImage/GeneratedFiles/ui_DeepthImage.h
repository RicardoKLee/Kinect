/********************************************************************************
** Form generated from reading UI file 'DeepthImage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEEPTHIMAGE_H
#define UI_DEEPTHIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeepthImageClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DeepthImageClass)
    {
        if (DeepthImageClass->objectName().isEmpty())
            DeepthImageClass->setObjectName(QStringLiteral("DeepthImageClass"));
        DeepthImageClass->resize(600, 400);
        menuBar = new QMenuBar(DeepthImageClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DeepthImageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DeepthImageClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DeepthImageClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DeepthImageClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DeepthImageClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DeepthImageClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DeepthImageClass->setStatusBar(statusBar);

        retranslateUi(DeepthImageClass);

        QMetaObject::connectSlotsByName(DeepthImageClass);
    } // setupUi

    void retranslateUi(QMainWindow *DeepthImageClass)
    {
        DeepthImageClass->setWindowTitle(QApplication::translate("DeepthImageClass", "DeepthImage", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DeepthImageClass: public Ui_DeepthImageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEEPTHIMAGE_H
