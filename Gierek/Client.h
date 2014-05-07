#pragma once
#include "Order.h"
class Client
{
protected:
	std::string name;
	Order *avarageOrder;
public:
	Client();
	Order MakeOrder();
};

