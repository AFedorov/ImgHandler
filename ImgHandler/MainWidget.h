#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QtWidgets/QWidget>
#include "ToolsPanel.h"
#include "BodyPanel.h"
#include "MenuPanel.h"

class MainWidget : public QWidget
{
	Q_OBJECT

public:
	MainWidget(QWidget *parent = 0);
	~MainWidget();

private:
	MenuPanel *menuPanel;
	ToolsPanel *toolsPanel;
	BodyPanel  *bodyPanel;
};


#endif MAINWIDGET_H

