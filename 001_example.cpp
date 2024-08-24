/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 001_example.cpp
 *   Title          : First OOP Code
 *   Description    : First Object Oriented Programming code with c++, which will explain how to
 *                    create a object and access the objects.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;
class Employee
{
private:
	// Members
	int id;
	string name, address;

public:
	// Methods
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
	emp1.get_data();
	emp1.print_data();
	return 0;
}