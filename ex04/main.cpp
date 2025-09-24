#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>

void do_it_easy(char **argv){
	std::string filename = argv[1];

	std::ifstream inFile(filename.c_str());
	if (!inFile){
		std::cerr << "Can't open file to read" << std::endl;
		exit(1);
	}
	
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile){
		std::cerr << "Can't create file to write" << std::endl;
	}

	std::string content;
	inFile >> content;

	size_t	pos;
	size_t	len = strlen(argv[2]);

	while (1){
		pos = content.find(argv[2]);
		if (pos == std::string::npos){
			outFile << content;
			if (!outFile){
				std::cerr << "Failed to write to" << std::endl;
				exit (1);
			}
			exit (0);
		}
		content.erase(pos, len);
		content.insert(pos, argv[3]);
	}
}


int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Incorect amount of arguments\n"
			<< "Use case: ./sed_at_home <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}
	do_it_easy(argv);
}
