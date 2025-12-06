/*
Functions : a block of code that performs a specific task. It can be called multiples times and helps to maintain code and split it into reusable chunks/parts/functions

syntax:

return_type function_name(parameters) {
// statements
}

// a function that prints hello world -> void
// a function that input two numbers and then give sum -> int
// a function that input a number and give it's factorial -> int
// a function that input three side of triangle and print it's area -> void
// a function that input a number and returns wehther a number is even or odd and name of the function is isEven -> bool

int main(){

    return 0;
}

return_type: it could be anything(primitive_type, user_defined (structures, classes) or void)

How to use the function?
Ans : we use the function by calling it's name and passing the necessary parameters when required

==========================================================================
parameters : a value supplied to a function at the time of calling (arguments)

how to define a parameter?

Answer : data type followed by parameter name.

example : a function that takes two numbers and return their sum

int sumTwoNumbers(int num1, int num2) {
    return num1 + num2;
}

how to call a parameterized function?
Answer: we call it by name and supply values while calling

sumTwoNumbers(5, 7); -> 12
*/

#include <iostream>
#include <cmath>
using namespace std;

void sayHello()
{
    cout << "Hello,What's up?" << endl;
}

// a function that input two numbers and then give sum

int sumTwoNumbers()
{
    // input two numbers
    int num1 = 0, num2 = 0;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    return num1 + num2;
}

// a function that input a number and give it's factorial -> int

int getFactorialOFNumber()
{
    // input a number
    int num = 0;
    cout << "Enter a number : ";
    cin >> num;

    // calculate factorial
    int fact = 1;

    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }

    return fact;
}

/*
// a function that take two numbers and then give sum -> int
// a function that take a number and give it's factorial -> int
// a function that take three side of triangle and print it's area -> void
*/

int sumTwoNumber(int num1, int num2)
{
    return num1 + num2;
}

int calculateFactorial(int num)
{
    int fact = 1;

    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }

    return fact;
}

double calculateArea(int a, int b, int c)
{
    double s = (a + b + c) / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

// how to pass array as a parameter?
// answer : array type followed by array name with []

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << endl;
    }
}

int sumofArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    return sum;
}

struct Person
{
    string name;
    int age;
};

// how to pass a structure to a function
// answer :  struct structure_type followed by structure name
void printUserDetails(struct Person p)
{
    cout << "==============Details===============" << endl;
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "====================================" << endl;
}

int main()
{

    // int arr[5] = {10, 20, 30, 40, 50};

    // printArray(arr, 5);
    // cout << "Sum is : " << sumofArray(arr, 5) << endl;
    // printArray(arr, 5);

    struct Person p;

    cout << "Enter your name : ";
    cin >> p.name;
    cout << "Enter your age : ";
    cin >> p.age;

    printUserDetails(p);
    return 0;
}