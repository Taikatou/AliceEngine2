#ifndef MANAGERINTERFACE_H
#define MANAGERINTERFACE_H

class ManagerInterface
{
protected:
public:
	virtual void Update(float delta_time) = 0;
};
#endif