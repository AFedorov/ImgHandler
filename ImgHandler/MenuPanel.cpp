#include "MenuPanel.h"
#include <QtGui/QPainter>

MenuPanel::MenuPanel(QWidget* parent)
	: QWidget(parent)
{
	setMaximumHeight(100);
}

void MenuPanel::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.fillRect(this->rect(), Qt::darkYellow);

}