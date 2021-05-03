#include "EntityDecorator.h"

float EntityDecorator::getLife()
{
    return _Entity->getLife();
}

float EntityDecorator::getDamage()
{
    return _Entity->getDamage();
}

bool EntityDecorator::getState()
{
    return _Entity->getState();
}
