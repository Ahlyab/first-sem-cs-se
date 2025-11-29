/*
structures: collection of mutiple type of data that can be stored under single name

syntax:
struct structure_name {
    // members
    data_type member_name;
};

struct Person {
    string name;
    int age;
    string cnic;
}


How to use a structure?

ans : it can be used as we use variables. first of all we need to create a variable/instance of the structure and then we can use it using dot operator/member selection operator

struct Person ali;

ali.age, ali.name, ali.cnic


*/

#include <iostream>
using namespace std;

struct Person
{
    string name;
    int age;
    string CNIC;
};

int main()
{
    const int size = 2;
    struct Person persons[size];

    for (int i = 0; i < size; ++i)
    {
        cout << "================INPUT " << i + 1 << "================" << endl;
        cout << "Enter your name : ";
        cin >> persons[i].name;
        cout << "Enter your age : ";
        cin >> persons[i].age;
        cout << "Enter your CNIC : ";
        cin >> persons[i].CNIC;
    }

    // print data of all persons

    for (int i = 0; i < size; ++i)
    {
        cout << "================Data " << i + 1 << "================" << endl;
        cout << persons[i].name << endl;
        cout << persons[i].age << endl;
        cout << persons[i].CNIC << endl;
    }

    // search based on name

    string searchName;
    cout << "Enter name to search : ";
    cin >> searchName;

    for (int i = 0; i < size; ++i)
    {
        if (persons[i].name == searchName)
        {
            cout << "User found!" << endl;
            cout << "Name : " << persons[i].name << endl;
            cout << "Age : " << persons[i].age << endl;
            cout << "CNIC : " << persons[i].CNIC << endl;
            break;
        }
    }
}