#ifndef BODYPANEL_H
#define BODYPANEL_H
#include <QtWidgets/QWidget>

class BodyPanel : public QWidget
{
	Q_OBJECT

public:
	explicit BodyPanel(QWidget *parent = 0);

	//void loadImage(const QString & fileName);

protected:
	void paintEvent(QPaintEvent *);

};


#endif BODYPANEL_H
