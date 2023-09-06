#include <iostream>
#include <vector>

std::vector<int> append(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> ret = a;
    for(int i = 0;i < b.size();i++)
    {
        ret.push_back(b[i]);
    }
    return ret;
}

int main()
{
    return 0;
}
