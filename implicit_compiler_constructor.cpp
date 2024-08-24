#include <iostream>
#include <cstring>
using namespace std;

class Student
{

    int id;
    string name;

public:
    Student()
    {
        cout << "Constructor is called" << endl;
        id = 0;
        name = "Emertxe";
    }

    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student st1, st2, st3, st4;
    st1.display();
    st2.display();
    st3.display();
    st4.display();
    return 0;
}
