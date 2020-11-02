#include <iostream>

using namespace std;

int main()
{
    // How do you find the missing number in a given integer array of 1 to 100?
    int a[100];
    int totalNum;
    for (int i = 1; i < 101; i++)
    {
        a[i] = i;
        if (i == 99)
        {
            a[i] = 0;
        }
        // totalNum += a[i];
    }

    // if I know the total number
    // if (totalNum - 50 == 5000)
    // {
    //     cout << "50" << endl;
    // }
    // else if (totalNum % 100 == 0)
    // {
    //     cout << "100" << endl;
    // }
    // else
    // {
    //     totalNum -= 50;
    //     int missingPair = totalNum % 100;
    //     cout << 100 - missingPair << endl;
    // }
}