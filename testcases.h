#pragma once
#include <bits/stdc++.h>
using namespace std;

// Common test arrays or data
vector<int> getTestArray()
{
    return {-8, 2, -3, 4, -5, -6, 7, 6, 7, -8, 8, -90, 6};
}

vector<int> getSortedTestArray1()
{
    return {-2, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
}
vector<int> getSortedTestArray2()
{
    return {-2, -1, 3, 6, 9, 12, 15, 18, 21, 24};
}
vector<int> getSortedTestArray3()
{
    return {0, 3, 9, 15, 27, 30};
    ;
}

void printVector(const vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << "\n";
}
void printVectorch(const vector<char> &v)
{
    for (char x : v)
        cout << x << " ";
    cout << "\n";
}
