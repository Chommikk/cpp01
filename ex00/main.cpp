#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int	main(){
	Zombie* zb = newZombie("Bob");
	zb->announce();
	delete zb;
	randomChump("Fixinela");
	return 0;
}
