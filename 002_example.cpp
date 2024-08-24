/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 002_example.cpp
 *   Title          : Access Specifiers
 *   Description    : This example shows different types of access specifiers - private,public and 
 *                    protected.
 *                    These define the accessibility of the members outside the class.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

class Employee
{
    private:
		int id;
		string name, address;

	public:
		void get_data(void)
		{
			std::cout << "Enter ID No: ";
			std::cin >> id;
			std::cout << "Enter Name: ";
			std::cin >> name;
			std::cout << "Enter Address: ";
			std::cin >> address;
		}
		void print_data(void)
		{
			std::cout << "The ID is: " << id << endl;
			std::cout << "The Name is: " << name << endl;
			std::cout << "The Address is: " << address << endl;
		}
};

int main()
{
	Employee emp1;

	// Private Members
	// cannot be accessed
	emp1.id = 10;
	emp1.name = "Tingu";
}
