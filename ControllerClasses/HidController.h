#ifndef HIDCONTROLLER_H
#define HIDCONTROLLER_H

#include "PhysicalControllerInterface.h"

class HidController : public PhysicalControllerInterface
{
protected:
public:
	HidController();
	virtual ~HidController();
	virtual void Update(float delta_time);
};
#endif