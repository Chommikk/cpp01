#include "Harl.hpp"

int	main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "Invalid usecase give 2 arguments" << std::endl;
		return (1);
	}
	std::map	<std::string, int> hash;
	hash["DEBUG"]	=	1;
	hash["INFO"]	=	2;
	hash["WARNING"]	=	3;
	hash["ERROR"]	=	4;
	int		lvl;
	Harl	h;

	try{
		lvl = hash.at(argv[1]);
	}catch(const std::out_of_range& err){
		std::cout << "I don't understand you please speak loudly and clearly" << std::endl;
		return (1);
	}
	switch (lvl){
		case 1:
			h.complain("DEBUG");
		case 2:
			h.complain("INFO");
		case 3:
			h.complain("WARNING");
		case 4:
			h.complain("ERROR");
	}
}
