// Question: Given n non-negative integers representing an elevation map where the width of each bar is 1,
// compute how much water it can trap after raining.

// Arr = {0,1,0,2,1,0,1,3,2,1,2,1}
// Output: 6

// Apprpach: Make two arrays left and right wherein left array stores the max height respective to L[i]
// going from left and right stores from right. then find min(L[i], R[i])-h[i] for each one and add in ans.

// Arr = {0,1,0,2,1,0,1,3,2,1,2,1}
// L[i]= {0,1,1,2,2,2,2,3,3,3,3,3}
// R[i]= {3,3,3,3,3,3,3,3,2,2,2,1}
// ans =  0+0+1+0+1+2+1+0+0+1+0+0=6

#include <bits/stdc++.h>
using namespace std;

int maxRainStore(vector<int> heights){
    int n = heights.size();
    vector<int> left(n,0);
    vector<int> right(n,0);

    //base case
    if(n<=2){
        return 0;
    }

    left[0] = heights[0];
    right[n-1] = heights[n-1];

    for(int i=1;i<n;i++){
        left[i] = max(left[i-1], heights[i]);
        right[n-i-1] = max(right[n-i], heights[n-i-1]);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=min(left[i],right[i])-heights[i];
    }
    return ans;
}


int main(){
    vector<int> arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<maxRainStore(arr)<<endl;
    return 0;
}