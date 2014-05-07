#include "pch.h"
#include "Coal.h"


Coal::Coal()
{
	this->amount = 0;
	this->price = 0;
}

Coal::Coal(double _amount, double _price)
{
	this->amount = _amount;
	this->price = _price;
}

double Coal::GetAmount()
{
	return this->amount;
}

double Coal::GetPrice()
{
	return this->price;
}

void Coal::SetPrice(double _price)
{
	this->price = _price;
}

void Coal::SetAmount(double _amount)
{
	this->amount = _amount;
}
