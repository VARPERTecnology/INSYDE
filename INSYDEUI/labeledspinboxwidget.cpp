#include "labeledspinboxwidget.h"
#include "ui_labeledspinboxwidget.h"

LabeledDoubleSpinBoxWidget::LabeledDoubleSpinBoxWidget(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LabeledSpinBoxWidget)
{
	initLDSBW(0);
}

LabeledDoubleSpinBoxWidget::LabeledDoubleSpinBoxWidget(double value, QWidget *parent) :
	QWidget(parent),
	ui(new Ui::LabeledSpinBoxWidget)
{
	initLDSBW(value);
}

LabeledDoubleSpinBoxWidget::~LabeledDoubleSpinBoxWidget()
{
	delete ui;
}

void LabeledDoubleSpinBoxWidget::setLabelText(const QString &text)
{
	ui->label->setText(text);
}

QString LabeledDoubleSpinBoxWidget::getLabelText() const
{
	return ui->label->text();
}

void LabeledDoubleSpinBoxWidget::setValue(double val)
{
	ui->sbValue->setValue(val);
}

double LabeledDoubleSpinBoxWidget::getValue() const
{
	return ui->sbValue->value();
}

void LabeledDoubleSpinBoxWidget::setMaximumValue(double val)
{
	ui->sbValue->setMaximum(val);
}

double LabeledDoubleSpinBoxWidget::getMaximumValue() const
{
	return ui->sbValue->maximum();
}

void LabeledDoubleSpinBoxWidget::setMinimumValue(double val)
{
	ui->sbValue->setMinimum(val);
}

double LabeledDoubleSpinBoxWidget::getMinimumValue() const
{
	return ui->sbValue->minimum();
}

void LabeledDoubleSpinBoxWidget::setDoubleSpinBox(QDoubleSpinBox *sb)
{
	ui->sbValue = sb;
}

QDoubleSpinBox *LabeledDoubleSpinBoxWidget::getDoubleSpinBox() const
{
	return ui->sbValue;
}

void LabeledDoubleSpinBoxWidget::initLDSBW(double value)
{
	ui->setupUi(this);
	setValue(value);
}
