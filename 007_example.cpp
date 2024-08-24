/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 007_example.cpp
 *   Title          : Default Constructor
 *   Description    : This program demonstrate the default constructor and how to initialize 
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

		Employee()
		{
			id = 0;
			name =(char *)malloc(sizeof(char)*10);
		}
};

int main()
{
	Employee emp1;

	cout << "The ID is " << emp1.id << endl;
	strcpy(emp1.name, "Tingu");
	cout << "The Name is " << emp1.name << endl;

	return 0;
}
