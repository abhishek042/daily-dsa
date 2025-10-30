#include "../testcases.h"

// Find Second largest in a rray without sorting

int second_max(vector<int> &arr)
{
    int max{0};
    int previous_max{0};

    for (int i : arr)
    {
        if (i > max)
        {
            max = i;
        }
    }

    for (int i : arr)
    {
        if (i < max && i > previous_max)
        {
            previous_max = i;
        }
    }
    return previous_max;
}

/*Given an array, find the second smallest and second largest element in the array.
Print ‘-1’ in the event that either of them doesn’t exist.*/

vector<int> second_minMax(vector<int> &arr)
{
    vector<int> sol{};
    int min{INT_MAX};
    int previous_min{INT_MAX};

    int max{INT_MIN};
    int previous_max{INT_MIN};

    if (arr.size() < 2)
    {
        sol.push_back(-1);
        return sol;
    }

    for (int i : arr)
    {
        if (i > max)
        {
            max = i;
        }
        if (i < min)
        {
            min = i;
        }
    }

    for (int i : arr)
    {
        if (i < max && i > previous_max)
        {
            previous_max = i;
        }
        if (i > min && i < previous_min)
        {
            previous_min = i;
        }
    }

    sol.push_back(previous_max);
    sol.push_back(previous_min);
    return sol;
}

//BEST APPROACH
int secondSmallest(vector<int> &arr)
{
    int n = arr.size();
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}