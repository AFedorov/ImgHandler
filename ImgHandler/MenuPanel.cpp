#include "MenuPanel.h"
#include <QtGui/QPainter>

MenuPanel::MenuPanel(QWidget* parent)
	: QWidget(parent)
{
	setMaximumHeight(40);
}

void MenuPanel::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.fillRect(this->rect(), Qt::darkGray);

}