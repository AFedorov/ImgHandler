#ifndef TOOLSPANEL_H
#define TOOLSPANEL_H

#include <QtWidgets/QWidget>

class ToolsPanel : public QWidget
{
	Q_OBJECT

public:
	explicit ToolsPanel(QWidget *parent = 0);
	//void paintEvent(QPaintEvent*);
	//signals:

//public slots :
protected:
	void paintEvent(QPaintEvent *);
};

#endif TOOLSPANEL_H

