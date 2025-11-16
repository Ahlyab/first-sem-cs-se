/*
user input : 5

sum = 1+2+3+4+5 = 15

*/

#include <iostream>
using namespace std;

int main()
{
    int number = 0, sum = 0;
    cout << "Enter a number : ";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    cout << "Sum : " << sum << endl;
    return 0;
}