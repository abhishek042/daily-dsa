#include "../testcases.h"

vector<int> movenegative(vector<int> &arr)
{
    int start = 0;
    int n = arr.size() - 1;
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[j] < 0)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

vector<int> movenegativetwo(vector<int> &arr)
{

    int n = arr.size();
    vector<int> sol;
    for (int x : arr)
    {
        if (x < 0)
        {
            sol.push_back(x);
        }
    }
    for (int x : arr)
    {
        if (x > 0)
        {
            sol.push_back(x);
        }
    }

    return sol;
}
