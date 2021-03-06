#include "simulation.h"

core::Simulation::Simulation() :
	QThread()
{
//    Q_INIT_RESOURCE(core_media);

}

void core::Simulation::add(GraphicObject *obj)
{
	setAutomaticObjectName(obj);
	objects.push_back(obj);
	obj->setSimulation(this);
}

void core::Simulation::remove(GraphicObject *obj)
{
	objects.remove(objects.indexOf(obj));
}

void core::Simulation::run()
{

}

void core::Simulation::setAutomaticObjectName(GraphicObject *obj)
{
	switch(obj->type()){
		case GraphicObject::gotADALINE:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_ADALINE));
			break;
		case GraphicObject::gotMLP:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_MLP));
			break;
		case GraphicObject::gotHopfield:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_HOPFIELD));
			break;
		case GraphicObject::gotKohonen:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_KOHONEN));
			break;
		case GraphicObject::gotRegion:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_REGION));
			break;
		case GraphicObject::gotAgent:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_AGENT));
			break;
		case GraphicObject::gotGraphicPointer:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_GRAPHICPOINTER));
			break;
		case GraphicObject::gotConnector:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_CONNECTOR));
			break;
		case GraphicObject::gotImage:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_IMAGE));
			break;
		case GraphicObject::gotDotMatrix:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_DOTMATRIX));
			break;
		case GraphicObject::gotImageEffect:
			obj->setObjectName(getNamePrivateHelper(SUFFIX_IMAGEEFFECT));
			break;
		case GraphicObject::gotGraphicObject:
		default:
			break;
	}
}

void core::Simulation::init()
{

}

QString core::Simulation::getNamePrivateHelper(const QString &suffix) const
{
	QString name = suffix.simplified();
	int index = 0;

	if(!objects.empty()){

		QString objectName;
		QVector<int> indexes;

		for(auto it = objects.begin(); it != objects.end(); ++it){
			objectName = (*it)->objectName();

			if(objectName.contains(name, Qt::CaseInsensitive)){
				indexes.push_back(objectName.simplified().section(" ", 1, 1).toInt());
			}
		}

		while(indexes.contains(index) && index < 50000){
			index++;
		}

	}
	return name + " " + QString::number(index);
}

