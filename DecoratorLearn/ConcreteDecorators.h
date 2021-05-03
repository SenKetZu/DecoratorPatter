#pragma once
#include "EntityDecorator.h"
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
class PlusDamage:
	public EntityDecorator
{
private:
	Entity _Entity;

public:
	PlusDamage(Entity entity);


	float getDamage();

};

//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
class PlusLife :
	public EntityDecorator
{
private:
	Entity _Entity;



public:
	PlusLife(Entity entity);

	float getLife();


};

