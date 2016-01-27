#ifndef DRAWABLEINTERFACE_H
#define DRAWABLEINTERFACE_H

class DrawableInterface
{
protected:
public:
	virtual void Update(float delta_time) = 0;
	virtual void Render() = 0;
};
#endif