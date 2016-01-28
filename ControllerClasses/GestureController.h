#ifndef GESTURECONTROLLER_H
#define GESTURECONTROLLER_H

#include "NonPhysicalControllerInterface.h"

class GestureController : public NonPhysicalControllerInterface
{
protected:
public:
	GestureController();
	virtual ~GestureController();
	virtual void Update(float delta_time);
};
#endif