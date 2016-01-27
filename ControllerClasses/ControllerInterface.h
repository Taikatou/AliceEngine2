#ifndef CONTROLLERINTERFACE_H
#define CONTROLLERINTERFACE_H

class ControllerInterface
{
protected:
	int input;
public:
	virtual void Update(float delta_time) = 0;
	virtual int GetInput() { return input; }
};
#endif