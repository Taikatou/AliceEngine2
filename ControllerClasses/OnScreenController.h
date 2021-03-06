#ifndef ONSCREENCONTROLLER_H
#define ONSCREENCONTROLLER_H

#include "NonPhysicalControllerInterface.h"
#include "../RenderEngine/DrawableInterface.h"

class OnScreenController : public NonPhysicalControllerInterface, 
						   public DrawableInterface
{
protected:
	DrawableInterface* ControllerScene;
public:
	OnScreenController(DrawableInterface* s);
	virtual ~OnScreenController();
	virtual void Update(float delta_time);
	virtual void Render();
};
#endif