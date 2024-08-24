/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 027_example-OperatorOverloading.cpp
 *   Title          : Polymorphism - Unary Operator Overloading
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
    Employee(int i, char *s,int sal);

    void display()
    {
        cout<<"Id: "<<id<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
    }

    //Operator overloading for '-'
    void operator-()
    {
        id*=-1;
    }

    //Operator overloading for pre increment '++'
    void operator++()
    {
        salary+=1000;
    }

    //Operator overloading for post increment '++'
    void operator++(int)
    {
        salary+=1000;
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
    Employee e1(10), e2(11, (char *)"John", 10000);
    //before '-' operator overloading e1 values - observe the id value
    e1.display();
    -e1;
    //After '-' operator overloading e1 values - observe the id value
    e1.display();

    //before pre increment operator overloading e2 values - observe the salary
    e2.display();
    ++e2;
    //After pre increment operator overloading e2 values - observe the salary value
    e2.display();

    //before post increment operator overloading e2 values - observe the salary
    e2.display();
    e2++;
    //After post increment operator overloading e2 values - observe the salary value
    e2.display();
    return 0;
}