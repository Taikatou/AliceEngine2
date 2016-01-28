#include "ControllerManager.h"
#include "OnScreenController.h"
#include "GestureController.h"
#include "HidController.h"
#include "MobileController.h"

ControllerManager::ControllerManager()
{
	int option = 0;
	switch (option)
	{
	case 0:	Controller = new GestureController();
		break;
	case 1: Controller = new HidController();
		break;
	case 2: Controller = new MobileController();
		break;
	default: 
		break;
	}
}

ControllerManager::~ControllerManager()
{
	delete Controller;
}

int ControllerManager::GetInput()
{
	return Controller->GetInput();
}

void ControllerManager::Update(float delta_time)
{
	Controller->Update(delta_time);
}