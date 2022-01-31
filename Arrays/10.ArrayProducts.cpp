// Question link : https://leetcode.com/problems/product-of-array-except-self/


#include <bits/stdc++.h>
using namespace std;

vector<int> arrayProducts(vector<int> arr){
    int n = arr.size();
    if (n == 1) {
        return {0};
    }
 
    int i, temp = 1;
 
    vector<int> prod(n,1);
    
    for (i = 0; i < n; i++) {
        prod[i] = temp;
        temp *= arr[i];
    }
 
    temp = 1;

    for (i = n - 1; i >= 0; i--) {
        prod[i] *= temp;
        temp *= arr[i];
    }
    return prod;
} 

int  main(){
    vector<int> nums = {1,2,3,4};
    auto ans = arrayProducts(nums);
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}