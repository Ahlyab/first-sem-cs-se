/*
bubble sort
*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size] = {0};

    // input from user

    for (int i = 0; i < size; ++i)
    {
        cout << "Enter a number " << i + 1 << " : ";
        cin >> arr[i];
    }

    // sort

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // print array

    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Smallest number : " << arr[0] << endl;
    cout << "Largest number : " << arr[size - 1] << endl;
    cout << "Second largest : " << arr[size - 2] << endl;

    return 0;
}