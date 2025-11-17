#include "Harl.hpp"
#include <iostream>


Harl::Harl(){

	farr[0] = &Harl::debug;
	farr[1] = &Harl::info;
	farr[2] = &Harl::warning;
	farr[3] = &Harl::error;

	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
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
	for (int i = 0; i < 4 ; i ++){
		if (str[i] == level){
			(this->*farr[i])();
			break ;
		}
	}
}
