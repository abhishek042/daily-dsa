#include "../testcases.h"
// Problem Statement: Given an array of N integers, left rotate the array by one place.
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 2,3,4,5,1

void leftRotate(vector<int> &arr)
{

    int first = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = first;
}

// Given an array of integers, rotating array of elements by k elements either left or right.

void rotate(vector<int> &arr, int dir, int rotateBy)
{

    if (dir == 1)
    {
        //cout << "Left Rotation\n";
        vector<int> temp(arr.begin(), arr.begin() + rotateBy);
        //cout << "Temp vector\n";
        //printVector(temp);
        int shift = rotateBy;
        while (shift != 0)
        {
            for (int i = 0; i < arr.size() - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            shift--;
        }
        //cout << "rotateBy " << rotateBy << "\n";
        for (int i = rotateBy; i > 0; i--)
        {
            arr[arr.size() - rotateBy] = temp[temp.size() - i];
            //cout << "inserted at: " << arr.size() - rotateBy << " With value: " << temp[temp.size() - i] << "\n";
            rotateBy--;
        }
    }
    else if (dir == 0)
    {
        cout << "Right Rotation\n";
        vector<int> temp(arr.end(), arr.end() - rotateBy);
    }
    else
    {
        return;
    }
}