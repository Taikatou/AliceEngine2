#ifndef NON_PHYSICAL_CONTROLLER_INTERFACE_H
#define NON_PHYSICAL_CONTROLLER_INTERFACE_H

#include "ControllerInterface.h"

class NonPhysicalControllerInterface : public ControllerInterface
{
protected:
	
public:
	virtual void Update(float delta_time) = 0;
};
#endif