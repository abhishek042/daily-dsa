#include "../testcases.h"

void reverseStr(string name)
{
    int length = name.length() - 1;
    cout << "Reversed Name: ";
    for (int i = length; i >= 0; i--)
    {
        std::cout << name.at(i);
    }
    cout << "\n";
}