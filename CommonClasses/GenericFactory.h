#ifndef GENERIC_FACTORY_H
#define GENERIC_FACTORY_H

template <class T> class GenericFactory
{
protected:
public:
	static T* MakeInstance() { return new T(); };
};
#endif