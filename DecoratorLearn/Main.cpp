#include <iostream>
#include "Player.h"
#include "ConcreteDecorators.h"
#include <vector>


template<class T>
T test()
{
	
}









void main()
{
	









	Entity* player=new PlusDamage(new PlusDamage(new PlusLife(new Player)));

	
	player = new PlusDamage(player);
	
	player = new PlusDamage(player);


	std::cout << "Vida: " << player->getLife() << std::endl;
	std::cout << "Daño: " << player->getDamage() << std::endl;




	return;
}