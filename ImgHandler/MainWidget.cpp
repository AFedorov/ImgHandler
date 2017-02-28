#include <QHBoxLayout>
#include "MainWidget.h"
#include "ToolsPanel.h"
#include "BodyPanel.h"

MainWidget::MainWidget(QWidget* parent)
	: QWidget(parent)
{
	this->resize(1200, 900);

	menuPanel = new MenuPanel(this);
	//toolsPanel = new ToolsPanel(this);
	//bodyPanel = new BodyPanel(this);

	QVBoxLayout *vLayout = new QVBoxLayout(this);
	//vLayout->setAlignment(Qt::AlignTop);
	vLayout->setSpacing(1);
	vLayout->setMargin(0);
	vLayout->addWidget(menuPanel);
	this->setLayout(vLayout);

	//QHBoxLayout *hLayout = new QHBoxLayout(this);
	//hLayout->setSpacing(1);
	//hLayout->setMargin(0);
	//hLayout->addWidget(bodyPanel, 2);
	//hLayout->addWidget(toolsPanel);
	//this->setLayout(hLayout);
}

MainWidget::~MainWidget()
{
	
}

