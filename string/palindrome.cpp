#include "../testcases.h"
#include <iostream>
#include <string>
using namespace std;

bool strPalindrome(string name)
{
    int length = name.length();
    const char *ch = name.c_str();
    char arr[length + 1];

    for (int i = 0; i < length; i++)
    {
        arr[i] = ch[length - 1 - i];
    }
    arr[length] = '\0';

    string reversed(arr);

    cout << "Reversed string: " << reversed << endl;

    if (name == reversed)
    {
        //cout << "It's a palindrome" << endl;
        return 1;
    }
    return 0;
}

bool strPalindrome_two(string name)
{
    char revarr[name.length()];
    int i = 1;
    for (char ch : name)
    {
        if (ch != '\0')
        {
            revarr[name.length() - i] = ch;
            i++;
        }
    }
    revarr[name.length()] = '\0';
    
    string rev_str= revarr;
    
    if (name == rev_str)
    {
        return 1;
    }
    return 0;
}
