#include "gssubwidget.h"
#include "ui_gssubwidget.h"

core::GSSubWidget::GSSubWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::GSSubWidget)
{
//    Q_INIT_RESOURCE(core_media);
	ui->setupUi(this);
}

core::GSSubWidget::~GSSubWidget()
{
	delete ui;
}
