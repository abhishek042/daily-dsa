#include "../testcases.h"
// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
// The union of two arrays can be defined as the common and distinct elements in the two arrays.
// NOTE: Elements in the union should be in ascending order.

// SOL USING MAPS
vector<int> FindUnion(vector<int> &arr1, vector<int> &arr2)
{
  map<int, int> freq;
  int n = arr1.size();
  int m = arr2.size();
  vector<int> Union;
  for (int i = 0; i < n; i++)
    freq[arr1[i]]++;
  for (int i = 0; i < m; i++)
    freq[arr2[i]]++;
  for (auto &it : freq)
    Union.push_back(it.first);
  return Union;
}

// SOL USING SETS
vector<int> FindUnion_2(vector<int> &arr1, vector<int> &arr2)
{
  set<int> distinct(arr1.begin(), arr1.end());
  distinct.insert(arr2.begin(), arr2.end());

  vector<int> Union;

  for (auto &it : distinct)
    Union.push_back(it);

  return Union;
}

vector<int> FindUnion_3(vector<int> &arr1, vector<int> &arr2)
{
  set<int> s;
  vector<int> Union;
  for (int i = 0; i < arr1.size(); i++)
    s.insert(arr1[i]);
  for (int i = 0; i < arr2.size(); i++)
    s.insert(arr2[i]);
  for (auto &it : s)
    Union.push_back(it);
  return Union;
}

vector < int > FindUnion_4(vector<int> &arr1, vector<int> &arr2) {
  int i = 0, j = 0; // pointers
  int n = arr1.size();
  int m = arr2.size();
  vector < int > Union; // Uninon vector
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j]) // Case 1 and 2
    {
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
      i++;
    } else // case 3
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n) // IF any element left in arr1
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  return Union;
}
