#include "../testcases.h"

// Problem Statement: Given an integer array sorted in non-decreasing order,
// remove the duplicates in place such that each unique element appears only once.
// The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates,
// then the first k elements of the array should hold the final result.
// It does not matter what you leave beyond the first k elements.

void remove_dups(vector<int> &arr)
{
    for (int index = 0; index < arr.size() - 1; index++)
    {

        if (arr[index] == arr[index + 1])
        {
            arr.erase(arr.begin() + index);
            index--;
        }
    }
}

void remove_dups_2(vector<int> &arr)
{
    int start = 0;
    for (int index = 0; index < arr.size() - 1; index++)
    {

        if (arr[index] == arr[index + 1])
        {
            cout << "arr[index]:" << arr[index] << " arr[index+1]:" << arr[index + 1] << "\n";
            start = index;
            while (arr[start] == arr[start + 1])
            {
                start++;
            }
            arr[index + 1] = arr[start + 1];

            // index--;
        }
        printVector(arr);
    }
}

void removeDuplicates(vector<int> &nums)
{
    // If array is empty, return 0 directly
    if (nums.empty())
        return ;

    // Pointer for the position of last unique element
    int i = 0;

    // Traverse the array starting from the second element
    for (int j = 1; j < nums.size(); j++)
    {
        // If current element is different from last unique element
        if (nums[j] != nums[i])
        {
            
            // Move pointer for unique element forward
            i++;
            // Place the new unique element at the next position
            nums[i] = nums[j];
        }
        
    }

    // i is index of last unique element, count = i + 1
    // return i + 1;
}
