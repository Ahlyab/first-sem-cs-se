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

*/

#include <iostream>
using namespace std;

void sayHello()
{
    cout << "Hello,What's up?" << endl;
}

int sumTwoNumbers()
{
    int num1, num2;

    cout << "Enter a two numbers : ";
    cin >> num1 >> num2;

    return num1 + num2;
}

int main()
{
    sayHello();

    int result = sumTwoNumbers();

    cout << "Result : " << result << endl;
    return 0;
}