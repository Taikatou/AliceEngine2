#include "SimpleTile.h"

SimpleTile::SimpleTile(RenderableInterface* i)
{
	img = i;
}

SimpleTile::~SimpleTile()
{

}

void SimpleTile::Update(float delta_time)
{
	img->Update(delta_time);
}

void SimpleTile::Render(CIwFVec2 position, CIwFVec2 scale)
{
	img->Render(position, scale);
}