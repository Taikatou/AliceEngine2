#ifndef GAME_H
#define GAME_H

#include "SceneManager.h"

class Game
{
protected:
	SceneManager* sceneManager;
public:
	Game();
	~Game();
	void Update(float delta_time);
	void Render();
};
#endif