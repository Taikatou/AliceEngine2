#ifndef PHYSICALCONTROLLERINTERFACE_H
#define PHYSICALCONTROLLERINTERFACE_H

#include "ControllerInterface.h"

class PhysicalControllerInterface: public ControllerInterface
{
protected:
	float sensitivity;
public:
	virtual void Update(float delta_time) = 0;
};
#endif