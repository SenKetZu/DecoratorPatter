#include <iostream>
#include "Player.h"
#include "ConcreteDecorators.h"
#include <vector>
#include <tuple>



class ModHandler
{
private:
	Entity* _Entity;

public:
	ModHandler(Entity* entity) : _Entity(entity) {};
	ModHandler() :_Entity(new Player) {};

	ModHandler* addmod(std::vector<EntityDecorator> *decorators)
	{
		for (auto &decorator : *decorators)
		{			
			decorator.Decorate(this->_Entity);			
		}

		return this;
	}

	Entity* getPlayer()
	{
		return _Entity;
	}

	// aca estaria bueno que tengas un "Entity* Build() que realice el new de _Entity...
	/*
	* asi te queda al final un 
	*  	auto player = playerBuilder.addmod<PlusLife>()
	*		                       .addmod<PlusDamage>()
	*                              .Build();
	* igual, esa forma de hacer las cosas es costumbre de ASP.NET 
	*/
};

void main()
{
	auto playerBase = new Player;

	ModHandler playerModded(playerBase);

	//playerModded.addmod<PlusLife>()->addmod<PlusDamage>();
	
	playerModded.addmod(new std::vector<EntityDecorator>{
		new PlusDamage,
		new PlusLife
	});

	std::cout << "Vida: " << playerModded.getPlayer()->getLife() << std::endl;
	std::cout << "Daño: " << playerModded.getPlayer()->getDamage() << std::endl;

	return;
}