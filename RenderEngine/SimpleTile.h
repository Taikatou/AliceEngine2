#ifndef SIMPLETILE_H
#define SIMPLETILE_H

#include "RenderableInterface.h"
#include "TileInterface.h"
#include "Iw2D.h"

class SimpleTile : public TileInterface
{
protected:
	RenderableInterface* img;
public:
	SimpleTile(RenderableInterface* i);
	virtual ~SimpleTile();
	virtual void Update(float delta_time);
	virtual void Render(CIwFVec2 position, CIwFVec2 scale);
};
#endif