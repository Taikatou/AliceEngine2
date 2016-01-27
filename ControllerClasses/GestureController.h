#ifndef GESTURECONTROLLER_H
#define GESTURECONTROLLER_H

#include "ControllerInterface.h"

class GestureController : public ControllerInterface
{
protected:
public:
	GestureController();
	virtual ~GestureController();
	virtual void Update(float delta_time);
};
#endif