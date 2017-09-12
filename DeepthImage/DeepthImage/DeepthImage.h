#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DeepthImage.h"

class DeepthImage : public QMainWindow
{
	Q_OBJECT

public:
	DeepthImage(QWidget *parent = Q_NULLPTR);

private:
	Ui::DeepthImageClass ui;
};
