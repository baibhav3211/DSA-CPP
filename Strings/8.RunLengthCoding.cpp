// Write a function to perform basic string compression using
//  the counts of repeated characters, also known as Run 
//  Length Encoding. Let see one example, the input string
// "aaaabcccccaaa" would become "a4b1c5a3". If the "compressed" 
// string would not become smaller than the original string, 
// your function should return the input string. You can assume
// the string has only uppercase and lowercase letters. You may
// use the to_string(int) method to convert an integer into string.

// Sample Inputs:
// bbbaaaadexxxxxx
// abc

// Output:
// b3a4d1e1x7
// abc


// Solution:

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    int n = s.length();
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 and s[i]==s[i+1]){
            count++;
            i++;
        }
        ans+=s[i];
        ans+=to_string(count);
    }
    if(ans.length()>n){
        cout<<s<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}