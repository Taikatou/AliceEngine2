#include "OnScreenController.h"

OnScreenController::OnScreenController(DrawableInterface* s)
{
	ControllerScene = s;
}

OnScreenController::~OnScreenController()
{

}

void OnScreenController::Update(float delta_time)
{
	ControllerScene->Update(delta_time);
}

void OnScreenController::Render()
{
	ControllerScene->Render();
}