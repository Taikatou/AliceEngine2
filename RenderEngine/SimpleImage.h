#ifndef SIMPLEIMAGE_H
#define SIMPLEIMAGE_H

#include "RenderableInterface.h"
#include "Iw2D.h"
class SimpleImage: public RenderableInterface
{
protected:
	CIw2DImage* img;
public:
	SimpleImage(CIw2DImage* i);
	~SimpleImage();
	virtual void Update(float delta_time);
	virtual void Render(CIwFVec2 position, CIwFVec2 scale);
};
#endif