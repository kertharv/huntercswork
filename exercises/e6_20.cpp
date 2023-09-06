#include <iostream>
#include <vector>

void mergeSort(std::vector<int>&left, std::vector<int>& right, std::vector<int>& v)
{
    int leftSize = left.size();
    int rightSize = right.size();
    int i = 0, j = 0, k = 0;

    while (j < leftSize && k < rightSize) 
    {
        if (left[j] < right[k]) 
        {
            v[i] = left[j];
            j++;
        }
        else 
        {
            v[i] = right[k];
            k++;
        }
        i++;
    }
    while (j < leftSize) 
    {
        v[i] = left[j];
        j++; i++;
    }
    while (k < rightSize) 
    {
        v[i] = right[k];
        k++; i++;
    }
}

void sort(std::vector<int> & v)
{
    if(v.size()<=1)
    {
        return;
    }

    int mid = v.size()/2;
    std::vector<int>l;
    std::vector<int>r;

    for(int i =0;i < mid;i++)
    {
        l.push_back(v[i]);
    }
    for(int i = mid;i < v.size();i++)
    {
        r.push_back(v[i]);
    }
    sort(l);
    sort(r);
    mergeSort(l,r,v);
}
std::vector<int> merge_sorted(std::vector<int> a, std::vector<int> b)
{
    std::vector<int> sorted;
    for(int i =0;i < a.size();i++)
    {
        sorted.push_back(a[i]);
    }
    for(int i =0;i < b.size();i++)
    {
        sorted.push_back(b[i]);
    }
    sort(a);
    sort(b);
    mergeSort(a,b,sorted);
    return sorted;
}

int main()
{
    std::vector<int> a = {1,10,23,3,5,12,9,2,5,1};
    std::vector<int> b = {44,42,41,43,44,45,49,47,48,46};
    std::vector<int> sort = merge_sorted(a,b);
    for(int i = 0;i < sort.size();i++)
    {
        std::cout << sort[i] << std::endl;
    }
    return 0;
}