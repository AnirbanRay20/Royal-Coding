/*
Change AM/PM to 24hrs time format
*/

#include<iostream>
using namespace std;

string timeformating(string s)
{
    int hh=stoi(s.substr(0,2));
    int mm=stoi(s.substr(3,2));
    int ss=stoi(s.substr(6,2));
    string clock = s.substr(9,2);
    if(clock == "AM")
    {
        if(hh==12)
        {
            hh=0;
        }
    }
    else if(clock=="PM")
    {
        if(hh!=12)
        {
            hh+=12;
        }
    }
    char result[9];
    sprintf(result,"%02d:%02d:%02d", hh, mm, ss);  //a special function inbuilt to format the return type of it
    return result;
}

int main()
{
    string time;
    cout<<"Enter the time in this format ( HH:MM:SS AM/PM ) : ";
    getline(cin,time);
    string result = timeformating(time);
    cout<<"The time in 24 hrs format : "<<result;
}