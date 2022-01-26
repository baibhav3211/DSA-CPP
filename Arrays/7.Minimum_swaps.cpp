// Problem: Given an array of size N, find the minimum number of swaps needed to make the array as sorted.

// Input: [5,4,3,2,1]
// Output: 2

// Input: [10,11,5,4,3,2,1]
// Output: 4

// Approach: In order to know min swaps we should know what is the correct location of the element and try to send them
// at their correct position. We will find the the nodes which are connected then swap for them will be node-1.
// O(n)

#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int> arr){
    //Know the actual positions of elements (sorting) 
    //store the current indices
    int n = arr.size();
    pair<int, int> ap[n];
    for(int i=0;i<n;i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }

    // sorting
    sort(ap,ap+n);

    //main logic
    int ans=0;
    vector<bool> visited(n, false);
    for(int i=0;i<n;i++){
        // if element is visited or element is in right position
        int old_position = ap[i].second;
        if(visited[i]==true or old_position == i){
            continue;
        }

        // visiting te element(index) for first time
        int node = i;
        int cycle = 0;
        while(!visited[node]){
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle+=1;
        }
        ans+=cycle-1;
    }
    return ans;
}

int main(){
    vector<int> arr = {2,4,5,1,3};
    cout<<minSwaps(arr)<<endl;
    return 0;
}