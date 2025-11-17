#include "Harl.hpp"

int	main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Invalid usecase give 2 arguments" << std::endl;
		return (1);
	}
	Harl	h;
	int		lvl = h.level(argv[1]);

	switch (lvl){
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break;
		case 4:
			std::cout << "I don't understand you please speak loudly and clearly" << std::endl;
	}
}
