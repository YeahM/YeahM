#ifndef CUSTOMTABLEWIDGET_H
#define CUSTOMTABLEWIDGET_H

#include <QTableWidget>
#include "ui_customtablewidget.h"

class CustomTableWidget : public QTableWidget
{
	Q_OBJECT

public:
	CustomTableWidget(QWidget *parent = 0);
	~CustomTableWidget();

private:
	Ui::CustomTableWidget ui;
};

#endif // CUSTOMTABLEWIDGET_H
