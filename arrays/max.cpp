#include "../testcases.h"

int maxArray(vector <int> &arr){
    int max=0;
    for(int x : arr){
        if(x>max){
            max=x;
        }
    }
    return max;
}