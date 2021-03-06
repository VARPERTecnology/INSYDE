#ifndef PHEROMONESENSOR_H
#define PHEROMONESENSOR_H

#include "share_ec_gui.h"
#include "sensor.h"

namespace ec_gui
{
/**
  @class PheromoneSensor
  @author Edixon Vargas
  @date 08-06-2012

  La clase @code{PheromoneSensor} es un tipo especial de sensor que detecta feromonas en el ambiente.
  Se usa por lo general cuando hay agentes en el ambiente que depositan feromonas.

  */
class EC_GUI_LIB_IMPORT_EXPORT PheromoneSensor : public Sensor
{
	public:
		explicit PheromoneSensor();
};
}
#endif // PHEROMONESENSOR_H
