/*
user input : 5

sum = 1+2+3+4+5 = 15

*/

#include <iostream>
using namespace std;

int main()
{
    // find second largest number
    int nums[7] = {0};

    for (int i = 0; i < 7; ++i)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> nums[i];
    }

    int largest = nums[0];

    for (int i = 1; i < 7; ++i)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }

    int second_largest = INT_MIN;

    for (int i = 0; i < 7; ++i)
    {
        if (nums[i] > second_largest && nums[i] < largest)
        {
            second_largest = nums[i];
        }
    }

    cout << "Largest value : " << largest << endl;
    cout << "Second Largest value : " << second_largest << endl;

    return 0;
}