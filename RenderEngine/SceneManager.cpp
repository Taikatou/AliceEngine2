#include "SceneManager.h"

SceneManager::SceneManager()
{

}

SceneManager::~SceneManager()
{

}

void SceneManager::Update(float delta_time)
{
	for (vector<DrawableInterface*>::iterator it = Children.begin();
	it != Children.end(); it++)
	{
		(*it)->Update(delta_time);
	}
}

void SceneManager::Render()
{
	for (vector<DrawableInterface*>::iterator it = Children.begin();
	it != Children.end(); it++)
	{
		(*it)->Render();
	}
}

void SceneManager::MoveChildToScreen(DrawableInterface* child)
{
	ChildrenOnScreen.push_back(child);
}

void SceneManager::MoveChildOffScreen(DrawableInterface* child)
{
	RemoveChildFromList(child, ChildrenOnScreen);
}