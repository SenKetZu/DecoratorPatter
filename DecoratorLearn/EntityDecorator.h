#pragma once
#include "Entity.h"
class EntityDecorator:
	public Entity
{
protected:
	Entity* _Entity;


public:
	EntityDecorator() {};

	EntityDecorator(Entity* entity) :_Entity(entity) {};

	void Decorate(Entity *entity)
	{
		auto oldEntity = this->_Entity;
		this->_Entity = new Entity(*entity);

		// clean memory <3
		delete oldEntity;
	}

	float getLife();
	float getDamage();
	bool getState();

};

