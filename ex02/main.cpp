#include <string>
#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string* ptr = &str;
	std::string& reff = str;

	std::cout << &str << " == adress of string variable\n";
	std::cout << &ptr << " == adress of pointer variable\n";
	std::cout << &reff << " == adress of reffrence variable" << std::endl;;

	std::cout << str << " == value of string\n";
	std::cout << ptr << " == value of pointer\n";
	std::cout << reff << " == value of value of refference\n";
}
