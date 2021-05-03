#pragma once
#include "Entity.h"
class EntityDecorator:
	public Entity
{
protected:
	Entity* _Entity;


public:
	EntityDecorator(Entity* entity) :_Entity(entity) {};

	float getLife();
	float getDamage();
	bool getState();

};

