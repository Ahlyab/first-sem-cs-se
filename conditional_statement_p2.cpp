/*
data types : int, float, double, char, bool

operators : +, -, *, /, %

int + int = int -> 2 + 2 = 5
int - int = int -> 2 - 2= 0
int * int = int -> 2 * 2 = 4
int / int = int -> 2 / 2 = 1,  19 / 6 = 3


int + double = double -> 2 + 2.5 = 4.5
int - double = double -> 4 - 2.5 = 1.5
int * double = double -> 2 * 3.3 = 6.6
int / double = double -> 10 / 3.0 = 3.33333
--------------------------------------
declaration vs initialization

declaration : variable is declared (allocated memory in RAM-> (memory)) but not initialized

garbage value : a value that is already present at the time of declaration

initialization : variable is declared and initialized
integer -> 2 bytes
int a;

// initialization
int b = 10;

int a, b;

cin >> a;

cout << a + b << endl;

---------------------------
int a = 0, b = 0, result = 0;
char operator = '';

---------------------------

>> : extraction operator
<< : insertion operator
*/

#include <iostream>
using namespace std;

int main()
{
    int marks1 = 0, marks2 = 0, marks3 = 0;

    cout << "Enter marks of 3 subjects separated by space : ";
    cin >> marks1 >> marks2 >> marks3;

    double percentage = ((marks1 + marks2 + marks3) * 100.0) / 300;

    cout << "Percentage : " << percentage << endl;

    if (percentage >= 80.0)
    {
        cout << "You did an awesome job" << endl;
    }
    else if (percentage >= 70.0)
    {
        cout << "You keep it up" << endl;
    }
    else if (percentage >= 60.0)
    {
        cout << "You did a good job" << endl;
    }
    else
    {
        cout << "You can do better" << endl;
    }
}