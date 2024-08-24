/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 010_example.cpp
 *   Title          : Destructors
 *   Description    : This program demonstrate the destructor and how to delete object member
 *                    form heap using 
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    public:
	int id;
	char *name;

	Employee(int i);
	Employee(int i, char *s);
	~Employee(void);
};

Employee::Employee(int i)
{   
    id = i;
}

Employee::Employee(int i, char *s)
{   
    id = i;
    name = (char *)malloc(sizeof(char)*10);
    strcpy(name, s);
}

Employee::~Employee(void)
{
    free(name);
}

int main()
{
    Employee e1(10), e2(11, (char *) "Tingu");

    cout << "ID: " << e1.id << endl;
    cout << "Name: " << e1.name << endl;
    cout << "ID: " << e2.id << endl;
    cout << "Name: " << e2.name << endl;

    return 0;
}
