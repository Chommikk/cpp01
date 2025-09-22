#include "HumanA.hpp"


void	HumanA::attack(void) const {
	if (!weapon.getType().empty())
		std::cout << name << " attacks with their "
			<< weapon.getType() << std::endl;
	else 
		std::cout << "No weapon equiped by " << name << std::endl;
}
