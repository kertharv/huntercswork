#include <iostream>

bool equals(int a[], int a_size, int b[], int b_size)
{
    int y = 0;
    bool yes = true;
    if(a_size != b_size)
    {
        return false;
    }
    if(a_size <= b_size)
    {
        y = a_size;
    }
    else
    {
        y = b_size;
    }
    for(int i = 0; i < y; i++)
    {
        if(a[i] != b[i])
        {
            yes = false;
        }
    }
    return yes;
}

int main()
{
    int a[] = {78, 4, 13, 22, 35};
    int b[] = {78, 4, 13, 22};
    std::cout << equals(a, 6, b, 6);
    return 0;
}