#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	// char* name = "Ritsu";
	// char name2[7] = { 'R', 'i', 't', 's', 'u', '\0' };
	// std::cout << name2 << std::endl;
	// name[2] = 'a';

	std::string name = std::string("Ritsu") + " hello!";
	// name += " hello!";
	bool contains = name.find("su") != std::string::npos;
	std::cout << name << std::endl;

	std::cin.get();
}