#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out;
    out.open("hello.txt");

    out << "Hello, World!";
    out.close();

    std::ifstream in;
    in.open("hello.txt");

    std::string str;
    getline(in, str);

    std::cout << str << std::endl;
    in.close();

    return 0;
}