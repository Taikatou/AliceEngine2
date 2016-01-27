#ifndef MOBILECONTROLLER_H
#define MOBILECONTROLLER_H

#include "ControllerInterface.h"

class MobileController : public ControllerInterface
{
protected:
public:
	MobileController();
	virtual ~MobileController();
	virtual void Update(float delta_time);
};
#endif