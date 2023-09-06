#include <iostream>
#include <string>

std::string middle(std::string word)
{
    
    std::string mid;
    int a = word.length() / 2;
    
    if(word.length() % 2 == 1)
    {
        mid = word[a];
    }

    else
    {
        mid = word[a - 1];
        mid = mid + word[a];
    }
    return mid;
}
int main()
{
    std::string resp;

    std::cout << "Please enter a word: ";
    std::cin >> resp;
    
    std::string answ = middle(resp);
    std::cout << answ << std::endl;
    return 0;
}