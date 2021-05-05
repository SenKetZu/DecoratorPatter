#include "ConcreteDecorators.h"
#include <iostream>


float PlusDamage::getDamage()
{
	return _Entity->getDamage()+5.0f;
}






float PlusLife::getLife()
{
	return _Entity->getLife()+5.0f;
}



void Shoot::shoot()
{
	std::cout << std::endl << "pium pium" << std::endl;
}
