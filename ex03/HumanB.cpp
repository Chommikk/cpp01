#include "HumanB.hpp"

void	HumanB::attack(void) const {
	if (!(weapon == NULL))
		std::cout << name << " attacks with their "
			<< weapon->getType() << std::endl;
	else 
		std::cout << "No weapon equiped by " << name << std::endl;
}


void	HumanB::setWeapon(Weapon& wp){
	weapon = &wp;
}
