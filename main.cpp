#include <bits/stdc++.h>
#include "testcases.h"
// #include "arrays/reverse_array.cpp"
// #include "arrays/sort.cpp"
// #include "arrays/max.cpp"
// #include "arrays/factorial.cpp"
// #include "arrays/moveelements.cpp"
// #include "arrays/common_in_three_arr.cpp"
#include "arrays/second_max.cpp"
#include "arrays/union.cpp"

#include "string/rev.cpp"
#include "string/palindrome.cpp"
#include <chrono>

// #include <climits>
using namespace std;

int main()
{
    auto arr = getTestArray();
    auto s_arr1 = getSortedTestArray1();
    auto s_arr2 = getSortedTestArray2();
    auto s_arr3 = getSortedTestArray3();

    
    printVector(s_arr1);
    printVector(s_arr2);
    auto start = chrono::high_resolution_clock::now(); // start timer

    // auto rev = reverseArray(arr);
    // reverseArrayjustprint(arr);
    // reverseInPlace(arr);
    // auto ans = common_sorted_three(s_arr1, s_arr2, s_arr3);
    //auto ans = strPalindrome("racecare");
    // auto ans = second_max(s_arr1);
    auto ans = FindUnion_2(s_arr2,s_arr1);
    
    
    auto end = chrono::high_resolution_clock::now(); // end timer
    chrono::duration<double, milli> duration = end - start;

    cout <<"SOLUTION ";// << ans <<"\n";
    printVector(ans);

    cout << "Execution Time: " << duration.count() << " ms" << endl;
}