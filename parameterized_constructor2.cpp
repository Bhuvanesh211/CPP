#include <iostream>
#include <string>
using namespace std;

class Student
{
    int id;
    string name;

public:
    Student(int id, string name) //:id(id) , name(name)
    {
        cout << "Constructor is called" << endl;
        this->id = id;
        this->name = name;
    }

    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student st1(20, "Bhuvi"), st2(20, "bhuvan");
    st1.display();
    st2.display();

    return 0;
}
