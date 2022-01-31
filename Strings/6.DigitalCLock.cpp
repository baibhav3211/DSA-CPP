// You are building a logic for a clock that
// requires you convert absolute time in minutes
// into a format supported by a digital clock.
// 125 minutes can be displayed as 2:05
// 155 minutes can be displayed as 2:35
// (You can assume the max value of minutes
// will be less than 24x60).
// INput: 1180
// Output: 19:40


// Language: cpp

#include <bits/stdc++.h>
using namespace std;

string convert2DigitalMinutes(int min){
    int hours = min / 60;
    int minutes = min % 60;
    string hours_str = to_string(hours);
    string minutes_str = to_string(minutes);
    if(hours < 10){
        hours_str = "0" + hours_str;
    }
    if(minutes < 10){
        minutes_str = "0" + minutes_str;
    }
    return hours_str + ":" + minutes_str;
}

int main(){
    int minutes;
    cin>>minutes;
    cout<<convert2DigitalMinutes(minutes)<<endl;
    return 0;
}