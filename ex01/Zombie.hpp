#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{
	private:
		std::string name;
	
	public:
		void announce (void) const;
		void nameZombie(std::string str);

		Zombie(std::string str);
		Zombie() = default;

		~Zombie(void);

};

#endif
