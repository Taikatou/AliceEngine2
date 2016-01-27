#include "AnimatedImage.h"

AnimatedImage::AnimatedImage(CIw2DImage* i, int frames_w, int frames_h)
{
	img = i;
	width = img->GetWidth();
	height = img->GetHeight();
	offset = CIwFVec2(0, 0);
	region = CIwFVec2((float)(width / frames_w),
					  (float)(height / frames_w));
}

AnimatedImage::~AnimatedImage()
{

}

void AnimatedImage::Update(float delta_time)
{

}

void AnimatedImage::Render(CIwFVec2 position, CIwFVec2 scale)
{
	Iw2DDrawImageRegion(img, position, scale, region, offset);
	if (offset.x == width)
	{
		offset.x = 0;
		if (offset.y == height)
		{
			offset.y = 0;
		}
		else
		{
			offset.y += region.y;
		}
	}
	else
	{
		offset.x += region.x;
	}
}