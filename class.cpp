#include <iostream>
#include <cstring>
using namespace std;
class Employee
{

    int id;
    string name;
    string address;

public: 

    void get_id(void)
    {
        cout << "Enter ID No : ";
        cin >> id;
    }
    void get_name(void)
    {
        cout << "Enter Name : ";
        cin >> name;
    }
    void get_address(void)
    {
        cout << "Enter Address : ";
        cin >> address;
    }
    void display()
    {
        cout << "Id : " << id << endl << "Name : " << name << endl << "Address : " << address;
    }
};

int main()
{
    Employee e1;
    e1.get_id();
    e1.get_name();
    e1.get_address();
    e1.display();
    return 0;
}