#include<algorithm>
#include<iostream>
#include<vector>
#include "erfen.h"
using namespace std;


int main() {
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 9;
//    vector<int> nums = {-1,0,3,5,9,12};
//    int target = 2;

    cout<<search(nums,target);
    return 0;
}