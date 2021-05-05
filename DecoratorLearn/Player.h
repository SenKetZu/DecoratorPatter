#pragma once
#include "Entity.h"

class Player:
	public Entity
{
public:

	Player(){}

	float getLife();
	float getDamage();
	bool getState();
	



};

