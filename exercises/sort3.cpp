#include <iostream>

int main()
{
    return 0;
}

void sort3(int& a, int& b, int& c)
{
    if(a > b)
    {
        int xd = a;
        a = b;
        b = xd;
    }
    if(a > c)
    {
        int xd = a;
        a = c;
        c = xd;
    }
    if(b > c)
    {
        int xd = b;
        b = c;
        c = xd;
    }
    return;
}