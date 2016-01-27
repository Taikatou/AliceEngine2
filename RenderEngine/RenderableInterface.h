#ifndef RENDERABLEINTERFACE_H
#define RENDERABLEINTERFACE_H

#include "Iw2D.h"
class RenderableInterface
{
protected:
public:
	virtual void Update(float delta_time) = 0;
	virtual void Render(CIwFVec2 position, CIwFVec2 scale) = 0;
};
#endif