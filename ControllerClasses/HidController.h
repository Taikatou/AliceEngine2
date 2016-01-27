#ifndef HIDCONTROLLER_H
#define HIDCONTROLLER_H

#include "ControllerInterface.h"

class HidController : public ControllerInterface
{
protected:
public:
	HidController();
	virtual ~HidController();
	virtual void Update(float delta_time);
};
#endif