// Given an integer array nums, find the contiguous subarray (containing at least one number) 
// which has the largest sum and return its sum.

// A subarray is a contiguous part of an array
// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.

#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr){
    int n = arr.size();
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main(){
    vector<int> arr = {-1,2,3,4,-2,6,-8,3};
    cout<<maxSubarraySum(arr)<<endl;
    return 0;
}