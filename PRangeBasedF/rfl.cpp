#include <iostream>

int main()
{
    int a[100];
    for (int i = 1; i < 101; i++)
    {
        a[i - 1] = i;
    }
    int x;
    for (int n : a)
    {
        x += n;
    }

    std::cout << x << std::endl;
}
