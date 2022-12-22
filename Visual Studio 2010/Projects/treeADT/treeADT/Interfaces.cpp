#include "Interfaces.h"
#include "interfaceParams.h"

template<class elemType>
InterfaceTreeADT<elemType>::~InterfaceTreeADT()
{
	std::cout << "Interface class destructor is destroyed here";
}

template InterfaceTreeADT<int>::~InterfaceTreeADT();