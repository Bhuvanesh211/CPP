/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 028_example-OperatorOverloading-2.cpp
 *   Title          : Polymorphism - Binary Operator Overloading
 *   Description    : This program demonstrates the use of operator with Objects.
 *                    Objects are user defined data types, so operator are not designed to use 
 *                    with them directly.
 *                    Operator Overloading is the process of writing your own function to perform
 *                    specific task on objects using opeators.
 *-----------------------------------------------------------------------------------------------*/

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    int id;
    char *name;
    int salary;

public:
    Employee(int i);
    Employee(int i, char *s, int sal);

    void display()
    {
        cout<<"Id: "<<id<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
    }

    //Operator overloading for pre increment '++'
    void operator+(float hike)
    {
        salary=salary + (salary * (hike/100));
    }

    //Operator overloading for pre increment '++'
    void operator+(Employee emp)
    {
        salary= salary + emp.salary;
    }
};

Employee::Employee(int i)
{
    id = i;
}

Employee::Employee(int i, char *s, int sal)
{
    id = i;
    name = (char *)malloc(sizeof(char) * 10);
    strcpy(name, s);
    salary = sal;
}

int main()
{
    Employee e1(11, (char *)"John", 10000),e2(12,(char *)"Alex",10000);
    float hike =  10;
    //before '+' operator overloading e1 values - observe the salary
    e1.display();
    e1+hike;
    //After hiking the salary - observe the salary value
    e1.display();

    //before adding salary of another object
    e1.display();
    e2.display();
    //can also add two objects
    e1+e2;
    //After adding
    e1.display();
    e2.display();
    return 0;
}