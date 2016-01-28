#ifndef CONTROLLER_MANAGER_h
#define CONTROLLER_MANAGER_H

#include "ControllerInterface.h"

class ControllerManager : public ControllerInterface
{
protected:
	ControllerInterface* Controller;
public:
	ControllerManager();
	~ControllerManager();
	virtual void Update(float delta_time);
	virtual int GetInput();
};
#endif