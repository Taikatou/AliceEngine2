#ifndef SCENEMANAGER_H
#define SCENEMANAGER_H

#include "../CommonClasses/ManagerInterface.h"
#include "Scene.h"
#include "DrawableInterface.h"
#include <vector>

using namespace std;

class SceneManager : public ManagerInterface, public Scene
{
protected:
	std::vector<DrawableInterface*> ChildrenOnScreen;
protected:
	virtual void MoveChildToScreen(DrawableInterface* child);
	virtual void MoveChildOffScreen(DrawableInterface* child);
public:
	SceneManager();
	virtual ~SceneManager();
	virtual void Update(float delta_time);
	virtual void Render();
};
#endif