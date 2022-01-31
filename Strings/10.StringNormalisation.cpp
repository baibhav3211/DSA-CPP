// You are given a sentence with words separated by spaces. 
// Your task is to: . Write a function that returns a copy of
// this sentence where all the words:
// • start with a capital letter
// • the rest of the letters are lower case 
// Note:
// • Your function should not modify the sentence given as argument.

// Input: This is SO MUCH FUN!
// Output: This Is So Much Fun!

#include <bits/stdc++.h>
using namespace std;

string normalise(const string &sentence){
    // string copy = "";
    // if(isalpha(sentence[0])){
    //     copy.push_back(toupper(sentence[0]));
    // }else{
    //     copy.push_back(sentence[0]);
    // }

    // for(int i=1;i<sentence.length();i++){
    //     if(!isalpha(sentence[i-1])){
    //         copy.push_back(toupper(sentence[i]));
    //     }else if(isalpha(sentence[i])){
    //         copy.push_back(tolower(sentence[i]));
    //     }else{
    //         copy.push_back(sentence[i]);
    //     }
    // }
    // return copy;

    string copy = sentence;
    if(isalpha(copy[0])){
        copy[0] = toupper(copy[0]);
    }
    for(int i=1;i<copy.length();i++){
        if(copy[i-1]==' '){
            copy[i] = toupper(copy[i]);
        }else{
            copy[i]= tolower(copy[i]);
        }
    }
    return copy;

}

int main(){

    string s;
    getline(cin,s);
    cout<<normalise(s)<<endl;

    return 0;
}