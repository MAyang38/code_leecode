//
// Created by mayang on 2023/8/30.
//
#include<youxushuzupingfang.h>
#include<vector>
#include<iostream>
using namespace std;

//[-4,-1,0,3,10]

std::vector<int> sortedSquares(std::vector<int>& A) {

    int k = A.size() - 1;
    vector<int> result(A.size(), 0);

    for(int i = 0, j = A.size() - 1 ;i <= j;)
    {
        if(A[i]*A[i] < A[j]*A[j])
        {
            result[k--] = A[j]*A[j];
            j--;
        }
        else
        {
            result[k--] = A[i]*A[i];
            i++;
        }

    }
    return result;

}
//
//int main()
//{
//    vector<int> nums = {-1, 0, 3, 5, 9, 12};
//    vector<int> res;
//    res = sortedSquares(nums);
//    for(int i  = 0; i < nums.size(); i++)
//
//        cout<<res[i]<<endl;
//    return 0;
//}
