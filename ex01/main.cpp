#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(){
	Zombie* horde = zombieHorde(5, "Jeff");

	for(int i = 0; i < 5; i ++){
		std::cout << i << " zombie is annoucing himself" << std::endl;
		horde[i].announce();
	}
	// horde[5].announce();
	delete []horde;
	return 0;
}
