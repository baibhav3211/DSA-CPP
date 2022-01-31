// Tokenizing a string denotes splitting a string with respect to some delimiter(s).
 
// Input : "today is a sunny day"
// Output : "today", "is", "a", 'sunny', "day"


// 1. Tokenisation using sstream

#include <bits/stdc++.h>
using namespace std;

int main(){

    string input;
    getline(cin, input);

    // create a string stream object
    stringstream ss(input);

    string token;
    vector<string> tokens;
    while(getline(ss, token, ' ')){
        tokens.push_back(token);
    }

    for(auto p: tokens){
        cout<<p<<",";
    }

}

// 2. Tokenisation using strtok 
// strtok function gives us the first token.
// This function internally maintains the state of the 
// string you passed in the last fn call,
// static variable

#include<bits/stdc++.h>
using namespace std;

int maine(){
    char input[1000];
    con.getline(input, 1000);

    //strtok
    char *token = strtok(input, " ");
    

    while(token!=NULL){
        cout<<token<<endl;
        token = strtok(NULL, " ");
    }


    return 0;
}


// 3. Making our tokenizer

#include<bits/stdc++.h>
using namespace std;

char *mystrtok(char *str, char delim){
    static char *input = NULL;
    if(str!=NULL){
        input = str;
    }
    if(input == NULL){
        return NULL;
    }
    char *token = new char[strlen(input)+1];
    int i=0;

    for(; input[i]!='\0', i++){
        if(token[i]!=delim){
            token[i] = input[i];
        }else{
            token[i] = '\0';
            input = input + i +1;
            return token;
        }
    }
    token[i] = '\0';
    //rest the input as NULL
    input = NULL;
    return token;
}

int maine(){
    char input[1000];
    con.getline(input, 1000);

    //strtok
    char *token = strtok(input,' ');
    

    while(token!=NULL){
        cout<<token<<endl;
        token = mystrtok(NULL,' ');
    }


    return 0;
}