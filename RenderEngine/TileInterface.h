#ifndef TILEINTERFACE_H
#define TILEINTERFACE_H

#include "Iw2D.h"
class TileInterface
{
protected:
public:
	virtual void Update(float delta_time) = 0;
	virtual void Render(CIwFVec2 position, CIwFVec2 scale) = 0;
};
#endif