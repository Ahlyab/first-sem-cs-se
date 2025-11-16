/*
loop : a set of instructions that are executed repeatedly.

while loop : a loop that executes a set of instructions as long
as a condition is true.

while (condition)
{
    statement
}

======================

for (initialization; condition; incr/decr) {
    statements
}

for loop is also called counter loop because we exactly knows how many times
it will be executed


================================
do while loop : a loop that executes at least once even if the condition is
false

do {
statements
} while(condition);
*/

#include <iostream>
using namespace std;

int main()
{
    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << i << endl;
    //     i *= 2; // i = i *2;
    // }

    // for (int i = 1; i <= 10; i *= 2)
    // {
    //     cout << i << endl;
    //     ++i;
    // }

    // int i = 1;

    // do
    // {
    //     cout << i << endl;
    //     i *= 2;
    // } while (i <= 10);

    bool isRaining = false;

    do
    {
        if (isRaining == true)
        {
            cout << "Take your umbrella" << endl;
            isRaining = false;
        }
        else
        {
            cout << "It's a sunny day";
            isRaining = true;
        }
    } while (isRaining == true); // =, ==

    return 0;
}