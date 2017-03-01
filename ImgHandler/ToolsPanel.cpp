#include "ToolsPanel.h"
#include <QtGui/QPainter>
#include <QtWidgets/QHBoxLayout>

ToolsPanel::ToolsPanel(QWidget* parent)
	: QWidget(parent)
{
	setMinimumHeight(500);
	setMinimumWidth(100);
	setMaximumWidth(100);

	startButton = new QPushButton("Start");
	loadButton = new QPushButton("Load Image");

	QVBoxLayout *saLayout = new QVBoxLayout;
	saLayout->setContentsMargins(0, 0, 0, 0);

	saLayout->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
	buttonsArea = new QWidget;
	QVBoxLayout *baLayout = new QVBoxLayout;
	baLayout->setContentsMargins(0, 0, 0, 0);
	baLayout->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
	baLayout->addWidget(loadButton);
	buttonsArea->setLayout(baLayout);
	saLayout->addWidget(buttonsArea);

	this->setLayout(saLayout);
}

void ToolsPanel::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.fillRect(this->rect(), Qt::darkGray);

}