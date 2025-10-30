#include "../testcases.h"

vector<int> BubbleSort(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr.at(start) > arr.at(start + 1))
        {
            swap(arr[start + 1], arr[start]);
        }
        start++;
    }
    return arr;
}

vector<int> BubbleSortwo(vector<int> &arr)
{

    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

void maxSubArray(vector<int> &arr)
{
    int maxSum = INT_MIN;
    int currentSum = 0;

    int start = 0; // temp start index
    int bestStart = 0, bestEnd = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            bestStart = start;
            bestEnd = i;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
            start = i + 1; // next possible subarray start
        }
    }

    cout << "Maximum subarray sum: " << maxSum << endl;
    cout << "Subarray: ";
    for (int i = bestStart; i <= bestEnd; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}