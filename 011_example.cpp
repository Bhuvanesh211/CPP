/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 011_example.cpp
 *   Title          : Abstraction with new and delete
 *   Description    : This program demonstrate the second pillar of OOPs "Abstraction". Also 
 *                    constructor and destructor and how to use new and delete keyword in 
 *                    memory management.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
	int id;
	char *name;
public:
	Employee(int i, char *s);
	~Employee(void);
	int get_id(void);
	char *get_name(void);
};

int Employee::get_id(void)
{
	return id;
}

char *Employee::get_name(void)
{
	return name;
}

Employee::Employee(int i, char *s)
{   
	id = i;
	name = new char [10]; 
	strcpy(name, s);
}

Employee::~Employee(void)
{ 
	delete name;
}

int main()
{
	Employee e1(10, (char *) "Tingu");

	cout << "ID: " << e1.get_id() << endl;
	cout << "Name: " << e1.get_name() << endl;

	return 0;
}
