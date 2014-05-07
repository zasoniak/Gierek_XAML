#pragma once
#include "Coal.h"
class CoalTypeB: public Coal
{
public:
	CoalTypeB();
	CoalTypeB(double _amount, double _price) :Coal(_amount, _price){}
};

