#ifndef ANIMATEDIMAGE_H
#define ANIMATEDIMAGE_H

#include "RenderableInterface.h"
#include "Iw2D.h"
class AnimatedImage : public RenderableInterface
{
protected:
	CIw2DImage* img;
	CIwFVec2 offset, region;
	float width, height;
public:
	AnimatedImage(CIw2DImage* i, int frames_w, int frames_h);
	~AnimatedImage();
	virtual void Update(float delta_time);
	virtual void Render(CIwFVec2 position, CIwFVec2 scale);
};
#endif