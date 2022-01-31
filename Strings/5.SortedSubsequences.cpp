// You are given a string, you need to print
// all the subsequences of the string sorted 
// by length and lexicographic sorted order if 
// length is same.

// Sample input: abcd
// Sample output: 
// ,a,b,c,d,ab,ac,ad,bc,bd,cd,abc,abd,acd,bcd,abcd,


// Solution:

#include <bits/stdc++.h>
using namespace std;

void subsequence(string s, string o, vector<string> &v){

    //base case
    if(s.length() == 0){
        v.push_back(o);
        return;
    } 

    //recursive case
    char ch = s[0];
    string reduced_input = s.substr(1);
    subsequence(reduced_input, o, v);
    subsequence(reduced_input, o + ch, v);

}

bool compare(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
}

int main(){
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsequence(s,output,v);

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ",";
    }
    return 0;
} 