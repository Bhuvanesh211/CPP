#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    char name;

    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student st1, st2;
    cout << sizeof(st1) << endl;
    cout << sizeof(st2) << endl;
    cout << sizeof(Student) << endl;
    return 0;
}
