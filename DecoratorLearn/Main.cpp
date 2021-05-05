#include <iostream>
#include "Player.h"
#include "ConcreteDecorators.h"
#include <vector>
#include <tuple>

void main()
{

	





	Entity* player = new PlusDamage(new PlusDamage(new PlusLife(new Player)));




	std::cout << "Vida: " << player->getLife() << std::endl;
	std::cout << "Daño: " << player->getDamage() << std::endl;





	return;
}