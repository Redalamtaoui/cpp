#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>


class contact
{
 std::string first_name;
 std::string last_name;
 std::string nickname;
 std::string phone_number;
 std::string darkest_secret;
};

class phonebook
{


 private:
	contact co[8];

 public:
	void phonebook_add()
	{
	   std::cout<<"first name :";
	   
	   std::cout<<"last name :";

	   std::cout<<"nickname :";

	   std::cout<<"phone number :";

	   std::cout<<"darkest secret :";
	}
	void phonebook_search()
	{



	}
	




};


#endif

