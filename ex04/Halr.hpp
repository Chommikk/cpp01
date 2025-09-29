#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <map>

class Harl{
	private :
		void	debug(void) const;
		void	info(void) const;
		void	warning(void) const;
		void	error(void) const;
		std::map	<
			std::string,
			void(Harl::*)(void)const
			> hash;

	public :
		void	complain(std::string leve);
		Harl();
};





#endif
