#include <iostream>

int main()
{
    return 0;
}

void sort2(int& a, int& b)
{
    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
}