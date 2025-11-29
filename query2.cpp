#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "";

    cout << "Enter your name : ";
    // cin >> str;
    getline(cin, str);

    cout << str << endl;
    cout << "size of string : " << str.size() << endl;

    int size = str.size();
    bool isPalindrome = true;
    for (int i = 0; i < size / 2; ++i)
    {
        if (str[i] != str[size - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome == true)
    {
        cout << "Entered string is a palindrome";
    }
    else
    {
        cout << "Entered string is not a palindrome ";
    }
}