#include <iostream>
#include "Player.h"
#include "ConcreteDecorators.h"
#include <vector>
#include <tuple>



class ModHandler
{
	Entity* _Entity;
	

public:
	
	ModHandler(Entity* entity) : _Entity(entity) {};
	ModHandler() :_Entity(new Player) {};


	template<class... T>
	Entity* addmod() 
	{	
			_Entity = new T(_Entity);

		return _Entity;
	}

	Entity* getPlayer() 
	{ 
		return _Entity; 
	}
	
};











void main()
{

	ModHandler player1(new Player);



	player1.addmod<PlusLife>();

	player1.addmod<PlusDamage>();
	/*
	std::cout << player << "<---PUNTERO PLAYER" << std::endl;


	player = new PlusDamage(player);

	std::cout << player << "<---PUNTERO PLAYER2" << std::endl;

	player = new PlusLife(player);
	
	*/

	std::cout << "Vida: " << player1.getPlayer()->getLife() << std::endl;
	std::cout << "Daño: " << player1.getPlayer()->getDamage() << std::endl;





	return;
}