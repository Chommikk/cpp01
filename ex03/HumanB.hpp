#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
	public:
		HumanB(std::string str, Weapon &wp): name(str), weapon(wp){}

		std::string	name;
		Weapon		weapon;

		void	attack(void) const;
};

#endif
