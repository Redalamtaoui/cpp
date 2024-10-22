#include "header.hpp"

int main()
{
	phonebook ph;
	while(1)
	{
		std::string command;
		std::cout << "Enter Your Command: ";
		std::cin >> command;

	
		if(command == "ADD")
			ph.phonebook_add();
		if(command == "SEARCH")
			std::cout << command << std::endl;
		if(command == "EXIT")
			break;
	}


}

