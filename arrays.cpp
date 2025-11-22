/*
Arrays : a collection of elements of the same type stored at contiguous memory locations.

OR

An array is a collection of data of the same type stored at contiguous memory locations.

Syntax :

Declaration:
data_type array_name[size];
int marks[5];

Initialization:
data_type array_name[size]; = {value}
int marks[3] = {0};
int marks[3] = {1,2,3};



int people[10];

How to access an element in an array
syntax : array_name[index]
index starts from 0

int marks[5] = {100,80, 88, 90, 50};

cout << marks[2] ; // 88
marks[2] = 89;
cout << marks[2] ; // 89

IMPORTANT NOTE : Array has Fixed size
*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int marks[size] = {0};

    for (int i = 0; i < size; ++i)
    {
        cout << "Enter marks of subject " << i + 1 << " : ";
        cin >> marks[i];
    }

    // print marks of each subject

    for (int i = 0; i < size; ++i)
    {
        cout << "Marks of Subject " << i + 1 << " : " << marks[i] << endl;
    }

    int sum = 0;

    for (int i = 0; i < size; ++i)
    {
        sum = sum + marks[i];
    }

    // double average_marks = sum / (double)size;
    double average_marks = sum / static_cast<double>(size);

    cout << "Average marks : " << average_marks << endl;
    return 0;
}