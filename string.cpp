#include<iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter the name " << endl;
    getline(cin, name);
    cout << "Name : " << name << endl;
    cout << name.size() << endl;
    return 0;
}