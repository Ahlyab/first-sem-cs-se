/*
operators
- Arithmetic operations : +, -, *, /, %
- relational operators : it tells relationship between two operands/values
>, <, ==, >=, <=, !=
- logical operators
&&, ||, !

bool x = true;

cout << !(!x) << endl;

-------------------------------------------------
conditional statement :
if
if else if
switch

---------------
conditional operator

---------------------------
if statement : it executes a block of code when a condition is true

if(condition)
{
    statement
}
else {
    statement
}
*/

#include <iostream>
using namespace std;

int main()
{
    // a program that will input age of a user and check if it's eligible to vote or not

    int age;

    cout << "Please enter your age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can vote" << endl;
    }
    else
    {
        cout << "You cannot vote" << endl;
    }
    return 0;
}