#include<algorithm>
#include<iostream>
#include<vector>
#include "erfen.h"
#include "youxushuzupingfang.h"
using namespace std;


int main() {

//    vector<int> nums = {-1, 0, 3, 5, 9, 12};
//    int target = 9;
////    vector<int> nums = {-1,0,3,5,9,12};
////    int target = 2;
//
//    cout<<search(nums,target);



    //有序数组平方
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    vector<int> res;
    res = sortedSquares(nums);
    for(int i  = 0; i < nums.size(); i++)

        cout<<res[i]<<endl;
    return 0;
}