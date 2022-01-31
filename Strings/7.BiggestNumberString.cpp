// You are given a vector of numbers. You want to 
// concatenate these numbers together to form the 
// lexicographically largest number. Print that 
// largest number number. You can't rearrange the 
// digits of any number, however you can place the 
// numbers next to each other in any order.

// Input: 10,11,20,30,3
// Output: 330201110

#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a+b>b+a;
}

string BiggestNumber(vector<int> a){
    string ans = "";
    vector<string> vs;
    for(int i=0;i<a.length();i++){
        vs.push_back(to_string(a[i]));
    }
    sort(vs.begin(),vs.end(),compare);
    for(int i=0;i<vs.size();i++){
        ans+=vs[i];
    }
    return ans;
}

int main(){
    vector<int> v = {10,11,20,30,3};
    cout<<BiggestNumber(v)<<endl;

    return 0;
}