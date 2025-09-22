#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA{
	public:
		HumanA(std::string str, Weapon &wp): name(str), weapon(wp){}

		std::string	name;
		Weapon		&weapon;

		void	attack(void) const;
};

#endif
