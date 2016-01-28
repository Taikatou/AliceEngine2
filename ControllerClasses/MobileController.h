#ifndef MOBILECONTROLLER_H
#define MOBILECONTROLLER_H

#include "PhysicalControllerInterface.h"

class MobileController : public PhysicalControllerInterface
{
protected:
public:
	MobileController();
	virtual ~MobileController();
	virtual void Update(float delta_time);
};
#endif