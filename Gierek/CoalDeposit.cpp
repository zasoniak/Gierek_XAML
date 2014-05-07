#include "pch.h"
#include "CoalDeposit.h"


CoalDeposit::CoalDeposit()
{
}

Order CoalDeposit::MakeOrder()
{
	Order *newOrder = new Order();

	newOrder->coalA->SetAmount(this->avarageOrder->coalA->GetAmount()*(1 + (rand() % 20 - 10) / 100));
	newOrder->coalB->SetAmount(this->avarageOrder->coalB->GetAmount()*(1 + (rand() % 20 - 10) / 100));

	newOrder->coalA->SetPrice(this->avarageOrder->coalA->GetPrice()*(1 + (rand() % 20 - 10) / 100));
	newOrder->coalB->SetPrice(this->avarageOrder->coalB->GetPrice()*(1 + (rand() % 20 - 10) / 100));
	return *newOrder;
}
