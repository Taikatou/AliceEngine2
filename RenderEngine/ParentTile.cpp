#include "ParentTile.h"

ParentTile::ParentTile(TileInterface* p)
{
	parent = p;
}

ParentTile::~ParentTile()
{
	delete parent;
	delete child;
}

void ParentTile::Update(float delta_time)
{
	parent->Update(delta_time);
	if (hasChild())
	{
		child->Update(delta_time);
	}
}

void ParentTile::Render(CIwFVec2 position, CIwFVec2 scale)
{
	parent->Render(position, scale);
	if (hasChild())
	{
		child->Render(position, scale);
	}
}