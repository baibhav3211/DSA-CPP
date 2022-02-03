// We consider one pivot and we take elements less than it
// to its left and more than to its right and
// will sort recursively.

#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e){
    int i=s-1;
    int pivot = a[e];
    for(int j=s;j<e;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}


void quicksort(vector<int> &a, int s, int e){
    //Base case
    if(s>=e){
        return;
    }

    // rec. case

    int p = partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}

int main(){
    vector<int> a = {10,5,2,0,7,6,4};
    int n = a.size();
    quicksort(a,0,n-1);
    for(int x: a){
        cout<<x<<" ";
    }
    return 0;
}