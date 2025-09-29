#include "Halr.hpp"

Harl::Harl(){
	hash["DEBUG"] = & Harl::debug;
	hash["INFO"] = & Harl::info;
	hash["WARNING"] = & Harl::warning;
	hash["ERROR"] = & Harl::error;
}

void	Harl::debug (void) const{
	std::cout << "Debuggin bugging bugging bugging" << std::endl;
}

void	Harl::info (void) const{
	std::cout << "RTFM" << std::endl;
}

void	Harl::warning (void) const{
	std::cout << "Potential skill issue" << std::endl;
}

void	Harl::error (void) const{
	std::cout << "Actualized skill issue" << std::endl;
}

void	Harl::complain(std::string level){
	(this->*(hash)[level])();
}
