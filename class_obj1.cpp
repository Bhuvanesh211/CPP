#include <iostream>
#include<cstring>
using namespace std;

class Student
{
public:
    int id;
    char name[20];

    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student st1, st2;
    st1.id = 100;
    strcpy(st1.name, "Bhuvanesh");

    st1.display();

    return 0;
}
