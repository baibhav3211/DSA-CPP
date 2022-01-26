// Problem : Given an array of size at-least two, find the smallest subarray that needs to be sorted in place
// so that entire input array can becomes sorted.
// If the input array is already sorted, the function should return [-1,-1], otherwise return the start and
// end index of the smallest subarray.

// Sample input: a=[1,2,3,4,5,8,6,7,9,10,11]
// Sample output: [5,7]

// Approach : Find smallest and largest number which makes the array non-sorted by interating and update it.
// Then iterate through whole array and find where those two elements can be placed by interating through
// left and right.
// O(n)

#include <bits/stdc++.h>
using namespace std;


bool outOfOrder(vector<int> arr, int i){
    int x = arr[i];
    if(i==0){
        return x > arr[1];
    }
    if(i==arr.size()-1){
        return x < arr[i-1];
    }
    return x > arr[i+1] or x < arr[i-1];
}

pair<int, int> subarraySort(vector<int> arr){
    int smallest = INT_MAX;
    int largest = INT_MIN;

    //check whether any element is out of order or not
    for(int i=0;i<arr.size();i++){
        int x = arr[i];

        if(outOfOrder(arr, i)){
            smallest = min(smallest, x);
            largest = max(largest, x);
        }
    }

    // Find the right index where smallest and largest lies (subarray) out of solution
    if(smallest == INT_MAX){
        return {-1,-1};
    }

    int left=0;
    while(smallest >= arr[left]){
        left++;
    }

    int right = arr.size()-1;
    while(largest <= arr[right]){
        right--;
    }

    return {left, right};

}

int main(){
    vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};
    auto p = subarraySort(arr);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}