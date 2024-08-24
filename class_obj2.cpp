#include <iostream>
#include<cstring>
using namespace std;

class Student
{
public:
    int id;
    char name[20];

    void get_details()
    {
        cout << "Enter the id and name of the student : ";
        cin >> id >> name;
    }

    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student st1, st2;
    st1.get_details();
    st2.get_details();
    st1.display();
    st2.display();

    return 0;
}
