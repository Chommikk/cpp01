#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl{
	private :
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
		void (Harl::*farr[4])(void)const ;
		std::string		str[4];

	public :
		void	complain(std::string leve);
		int		level(std::string level);
		Harl();
};

#endif
