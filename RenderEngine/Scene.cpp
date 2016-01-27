#include "Scene.h"

Scene::Scene()
{

}

Scene::~Scene()
{

}

void Scene::Update(float delta_time)
{
	for (vector<DrawableInterface*>::iterator it = Children.begin();
		 it != Children.end(); it++)
	{
		(*it)->Update(delta_time);
	}
}

void Scene::Render()
{
	for (vector<DrawableInterface*>::iterator it = Children.begin();
		 it != Children.end(); it++)
	{
		(*it)->Render();
	}
}

void Scene::AddChild(DrawableInterface* child)
{
	Children.push_back(child);
}

bool Scene::RemoveChild(DrawableInterface* child)
{
	return RemoveChildFromList(child, Children);
}

bool Scene::RemoveChildFromList(DrawableInterface* child, std::vector<DrawableInterface*>& List)
{
	for (vector<DrawableInterface*>::iterator it = List.begin();
	it != List.end(); it++)
	{
		if (*it == child)
		{
			List.erase(it);
			return true;
		}
	}
	return false;
}