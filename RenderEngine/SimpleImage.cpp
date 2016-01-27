#include "SimpleImage.h"

SimpleImage::SimpleImage(CIw2DImage* i)
{
	img = i;
}

SimpleImage::~SimpleImage()
{

}

void SimpleImage::Update(float delta_time)
{

}

void SimpleImage::Render(CIwFVec2 position, CIwFVec2 scale)
{
	Iw2DDrawImage(img, position, scale);
}