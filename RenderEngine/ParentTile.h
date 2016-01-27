#ifndef PARENTTILE_H
#define PARENTTILE_H

#include "TileInterface.h"
#include "Iw2D.h"

class ParentTile : public TileInterface
{
protected:
	TileInterface* parent;
	TileInterface* child;
public:
	ParentTile(TileInterface* p);
	virtual ~ParentTile();
	virtual void Update(float delta_time);
	virtual void Render(CIwFVec2 position, CIwFVec2 scale);
	bool hasChild()								{ return NULL != child; };
	void RemoveChild()							{ child = NULL; }
	void DeleteChild()							{ delete child; }
	void AddChild(TileInterface* c)				{ child = c; }
};
#endif