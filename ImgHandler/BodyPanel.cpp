#include <QPainter>
#include "BodyPanel.h"

BodyPanel::BodyPanel(QWidget *parent)
	: QWidget(parent)
{
	setMinimumSize(800, 600);
}

void BodyPanel::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.fillRect(this->rect(), Qt::gray);
	
}

