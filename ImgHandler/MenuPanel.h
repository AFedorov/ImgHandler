#ifndef MENUPANEL_H
#define MENUPANEL_H

#include <QtWidgets/QWidget>

class MenuPanel : public QWidget
{
	Q_OBJECT

public:
	explicit MenuPanel(QWidget *parent = 0);

protected:
	void paintEvent(QPaintEvent *);
};

#endif MENUPANEL_H