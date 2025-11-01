#include "../testcases.h"
//Problem Statement: Given an array of N integers, left rotate the array by one place.
//Input: N = 5, array[] = {1,2,3,4,5}
//Output: 2,3,4,5,1

void leftRotate(vector<int> &arr){

    int first = arr[0];
    for(int i =0; i<arr.size()-1;i++){
        arr[i]=arr[i+1];
    }
    arr[arr.size()-1]=first;
}