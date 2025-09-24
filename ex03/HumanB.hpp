#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(std::string str, Weapon &wp): name(str), weapon(&wp){}
		HumanB(std::string str): name(str), weapon(NULL){}


		void	attack(void) const;
		void	setWeapon(Weapon& wp);
};

#endif
