// Palindrome Break
// Given a palindromic string of lowercase English letters
// palindrome , replace exactly one character with any 
// lowercase English letter so that the resulting string is
// not a palindrome and that it is the lexicographically smallest
// one possible. Return the resulting string. If there is no way
// to replace a character to make it not a palindrome, return an 
// empty string. 
// Example-1
// Input: palindrome = "abccba"
// Output: "aaccba"
// Explanation: There are many ways to make "abccba" not a palindrome,
// such as "zbccba", "aaccba", and "abacba". Of all the ways, "aaccba" 
// is the lexicographically smallest.

#include <bits/stdc++.h>
using namespace std;

string breakPalindrome(string palindrome){
    int n = palindrome.length();

    for(int i=0;i<n/2;i++){
        if(palindrome[i]!='a'){
            palindrome[i]='a';
            return palindrome;
        }
    }
    palindrome[n-1]='b';
    return n<2?"":palindrome;
}

int main(){

    string palindrome;
    cin>>palindrome;
    cout<<breakPalindrome(palindrome)<<endl;

    return 0;
}


// class Solution {
// public:
// string breakPalindrome(string palindrome) 
// {
//     int n=palindrome.size();
    
//     for(int i=0;i<n/2;i++)//check only till half of string because a string is non-palindromic if first half is changed with 'a'  except if all the 'a' are in string
//     {
//         if(palindrome[i]!='a')//id their is not 'a' in string
//         {
//             palindrome[i]='a';//then replace non 'a' character by 'a'
            
//             return palindrome;
//         }
//     }
//     //if their is are all the 'a' in the string then replace last character by 'b'
    
//     palindrome[n-1]='b';
    
//     return n<2?"":palindrome;
    
// }
// };