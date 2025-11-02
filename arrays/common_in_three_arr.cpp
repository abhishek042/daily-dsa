#include "../testcases.h"

// QUESTION
// find common elements In 3 sorted arrays

vector<int> common_sorted_three(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    vector<int> solution;

    for (int x : arr1)
    {
        bool foundIn2 = false;

        for (int z : arr2)
        {
            if (x == z)
            {
                foundIn2 = true;
                break;
            }
        }
        if (foundIn2)
        {
            for (int y : arr3)
            {
                if (x == y)
                {
                    solution.push_back(x);
                    break;
                }
            }
        }
    }

    return solution;
}

vector<int> common_sorted_four(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    unordered_set<int> s2(arr2.begin(), arr2.end());
    unordered_set<int> s3(arr3.begin(), arr3.end());

    vector<int> solution;

    for (int x : arr1)
    {
        if (s2.count(x) && s3.count(x))
        {
            solution.push_back(x);
        }
    }

    sort(solution.begin(), solution.end()); // optional, if you want sorted output
    return solution;
}
