#include<iostream>
#include<string>
using namespace std;

int isPresent(string sen, string sub)
{
    int pos=sen.find(sub);
    return 1;
}

int main()
{
    string sen,sub1,sub2;
    cout<<"Enter a sentence : \n";
    getline(cin,sen);
    cout<<"Enter the substring 1 :";
    cin>>sub1;
    cout<<"Enter the substring 2 : ";
    cin>>sub2;
    int pos;
    int index1=0,index2=0;
    if(isPresent(sen,sub1)==1 && isPresent(sen,sub2)==1)
    {
        
    }
    else
    {
        
    }
}