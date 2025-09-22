#include "Zombie.hpp"

void Zombie::announce(void) const{
	if (!name.empty())
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameZombie (std::string str){
	if (!name.empty())
		name = str;
}

Zombie::Zombie(std::string str){
	name = str;
}

Zombie::~Zombie(void){
	std::cout << name << " was destroyed" << std::endl;
}
