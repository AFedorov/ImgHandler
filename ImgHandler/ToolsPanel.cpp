#include "ToolsPanel.h"
#include <QtGui/QPainter>

ToolsPanel::ToolsPanel(QWidget* parent)
	: QWidget(parent)
{
	setMinimumHeight(500);
	setMinimumWidth(100);
	setMaximumWidth(100);

}

void ToolsPanel::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.fillRect(this->rect(), Qt::darkGray);

}