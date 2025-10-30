#include "../testcases.h"

vector<int> reverseArray(const vector<int> &arr)
{
    vector<int> rev = arr;
    reverse(rev.begin(), rev.end());
    return rev;
}

void reverseArrayjustprint(const vector<int> arr)
{

    int size = arr.size();
    cout << size << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        // cout<<"i is "<<i<<endl;
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
things that i did wrong in this twopointer aproch
1. the function arg cant be const if in trying to replace inplace as we are modifing the array only
2. when using start and end why need a for loop use a while insted
3. swap works like swap(a,b) a gets replaced by b
*/
void reverseInPlace(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

vector<int> revUsingTemp(const vector<int> &arr)
{

    int size = arr.size();
    vector<int> rev(size);

    for (int i = 0; i < size; i++)
    {
        rev[i] = arr[size - 1 - i];
    }

    return rev;
}

void revUsingRecursion(vector<int> &arr, int size)
{
    
}
