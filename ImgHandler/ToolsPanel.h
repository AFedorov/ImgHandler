#ifndef TOOLSPANEL_H
#define TOOLSPANEL_H

#include <QtWidgets/QWidget>
#include <QPushButton>

class ToolsPanel : public QWidget
{
	Q_OBJECT

public:
	explicit ToolsPanel(QWidget *parent = 0);

	QWidget *buttonsArea;
	QPushButton *loadButton;
	QPushButton *startButton;

	//void paintEvent(QPaintEvent*);
	//signals:

//public slots :
protected:
	void paintEvent(QPaintEvent *);
};

#endif TOOLSPANEL_H

