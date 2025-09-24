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
	std::string line;
	while (std::getline(inFile, line)){
		content += line + "\n";
	}

	size_t	pos = 0;
	size_t	len = strlen(argv[2]);
	size_t	len_replace = strlen(argv[3]);
	std::string to_find = argv[2];
	std::string to_replace = argv[3];

	pos = content.find(to_find, pos);
	while (pos != std::string::npos){
		content.erase(pos, len);
		content.insert(pos, to_replace);
		pos += len_replace;
		pos = content.find(to_find, pos);
	}
	std::cout << content << std::endl;
	outFile << content;
	if (!outFile){
		outFile.close();
		inFile.close();
		std::cerr << "Failed to write to" << std::endl;
		exit (1);
	}
	outFile.close();
	inFile.close();
	exit (0);
}


int main(int argc, char **argv){
	if (argc != 4){
		std::cout << "Incorect amount of arguments\n"
			<< "Use case: ./sed_at_home <filename> <string_to_find> <string_to_replace>" << std::endl;
		return (1);
	}
	do_it_easy(argv);
}
