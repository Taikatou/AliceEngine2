#ifndef CONTROLLERINTERFACE_H
#define CONTROLLERINTERFACE_H

#include "../CommonClasses/ManagerInterface.h"

class ControllerInterface: public ManagerInterface
{
protected:
	int input;
public:
	virtual void Update(float delta_time) = 0;
	virtual int GetInput() { return input; }
};
#endif