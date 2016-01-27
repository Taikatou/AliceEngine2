#ifndef SCENE_H
#define SCENE_H

#include <vector>
#include "DrawableInterface.h"
using namespace std;

class Scene : public DrawableInterface
{
protected:
	std::vector<DrawableInterface*> Children;
protected:
	bool RemoveChildFromList(DrawableInterface* child, std::vector<DrawableInterface*>& List);
public:
	Scene();
	virtual ~Scene();
	virtual void Update(float delta_time);
	virtual void Render();

	virtual void AddChild(DrawableInterface* child);
	virtual bool RemoveChild(DrawableInterface* child);
};
#endif