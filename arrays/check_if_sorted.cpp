#include "../testcases.h"

// Problem Statement: Given an array of size n,
// write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order
// or not. If the array is sorted then return True, Else return False.

// Note: Two consecutive equal values are considered to be sorted.

bool checkIfSorted(vector<int> &arr)
{
    int start{0};
    int end{arr.size() - 1};
    cout<<"LIMITS: "<<arr[start]<<" "<<arr[end]<<"\n";
    bool isSorted{false};
    while (start < end)
    {
        if (arr[start] <= arr[start+1])
        {
            isSorted = true;
        }
        else
        {
            isSorted = false;
            break;
        }
        start++;
    }
    return isSorted;
}