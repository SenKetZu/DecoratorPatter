#include "ConcreteDecorators.h"



float PlusDamage::getDamage()
{
	return _Entity->getDamage()+5.0f;
}






float PlusLife::getLife()
{
	return _Entity->getLife()+5.0f;
}







