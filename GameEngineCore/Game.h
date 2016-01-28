#ifndef GAME_H
#define GAME_H

#include "../RenderEngine/SceneManager.h"
#include "../CommonClasses/ManagerInterface.h"

#include <vector>

using namespace std;

class Game
{
protected:
	std::vector<ManagerInterface*> managers;
	SceneManager* sceneManager;
public:
	Game();
	~Game();
	void Update(float delta_time);
	void Render();
};
#endif