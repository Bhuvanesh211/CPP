/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 008_example.cpp
 *   Title          : Parameterised Constructor
 *   Description    : This program demonstrate the parameterized constructor and how to initialize 
 *                    the object.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
public:
	int id;
	char *name;

	Employee(int x, char *s);
};

Employee::Employee(int x, char *s) 
{
	id = 0;
	name = (char *)malloc(sizeof(char)*10);
	strcpy(name, s);
}

int main()
{
	Employee emp1(10, (char *) "Tingu");

	cout << "The ID is " << emp1.id << endl;
	cout << "The Name is " << emp1.name << endl;

	return 0;
}
