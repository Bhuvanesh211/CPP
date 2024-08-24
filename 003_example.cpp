/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 003_example.cpp
 *   Title          : Access specifiers
 *   Description    : This program explains the public access specifiers and its behavior.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>

using namespace std;

class Employee
{
	private:
		int id;

	public:
		string name, address;

		void get_data(void)
		{
			cout << "Enter ID No: ";
			cin >> id;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Address: ";
			cin >> address;
		}
		
		void print_data(void)
		{
			cout << "The ID is: " << id << endl;
			cout << "The Name is: " << name << endl;
			cout << "The Address is: " << address << endl;
		}
};

int main()
{
	Employee emp1;

	// Allowed
	emp1.name = "John";
	emp1.get_data();

	return 0;
}
