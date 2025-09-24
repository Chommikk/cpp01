#include "Weapon.hpp"

const std::string	Weapon::getType(void) const {
	const std::string& reff = type;
	return (reff);
}
void Weapon::setType(std::string str) {
	type = str;
}

Weapon::Weapon(std::string str){
	type = str;
}
