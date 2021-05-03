#include "ConcreteDecorators.h"

PlusDamage::PlusDamage(Entity entity):_Entity(entity)
{

}



float PlusDamage::getDamage()
{
	return _Entity.getDamage()+5.0f;
}



PlusLife::PlusLife(Entity entity):_Entity(entity)
{
}

float PlusLife::getLife()
{
	return _Entity.getLife()+5.0f;
}





