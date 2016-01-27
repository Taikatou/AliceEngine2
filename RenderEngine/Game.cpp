#include "Game.h"

Game::Game()
{
	sceneManager = new SceneManager();
}

Game::~Game()
{
	delete sceneManager;
}

void Game::Update(float delta_time)
{
	sceneManager->Update(delta_time);
}

void Game::Render()
{
	sceneManager->Render();
}