// Given a string, write a function to replace all spaces in a string with '%20'. It is given that the
// string has sufficient space at the end to hold the additional characters.

//  Input: Hello World
//  Output: Hello%20World

#include <bits/stdc++.h>
using namespace std;

string replaceSpace(string s){
    int n = s.length();
    string res="";
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            count++;
        }
    }
    int idx = n + 2*count;
    s.resize(idx);
    s[idx] = '\0';
    for(int i=n-1;i>=0;i--){
        if(s[i]==' '){
            s[idx-1] = '0';
            s[idx-2] = '2';
            s[idx-3] = '%';
            idx = idx - 3;
        }
        else{
           s[idx-1] = s[i];
           idx--;
        }
    }
    return s;
}

int main(){
    string s = "Hello world Baibhav";
    cout<<replaceSpace(s)<<endl;
    return 0;
}