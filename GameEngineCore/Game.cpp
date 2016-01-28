#include "Game.h"
#include "../ControllerClasses/ControllerManager.h"
#include "../CommonClasses/GenericFactory.h"

Game::Game()
{
	sceneManager = GenericFactory<SceneManager>::MakeInstance();
	managers.push_back(GenericFactory<ControllerManager>::MakeInstance());
	managers.push_back(sceneManager);
}

Game::~Game()
{
	for (vector<ManagerInterface*>::iterator it = managers.begin();
		 it != managers.end(); it++)
	{
		delete (*it);
	}
}

void Game::Update(float delta_time)
{
	for (vector<ManagerInterface*>::iterator it = managers.begin();
		 it != managers.end(); it++)
	{
		(*it)->Update(delta_time);
	}
}

void Game::Render()
{
	sceneManager->Render();
}