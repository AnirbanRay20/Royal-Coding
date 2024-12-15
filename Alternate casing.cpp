#include<iostream>
using namespace std;
int main()
{
    string word,output="";
    cout<<"Enter a word : ";
    cin>>word;
    int i,size=word.size();
    for(i=0;i<size;i++)
    {
        char ch=word.at(i);
        if(ch>='a' && ch<='z')
            output+=(char)((int)ch - 32);
        else if(ch>='A' && ch<='Z')
            output+=(char)((int)ch + 32);
        else
            output+=ch;
    }
    
    cout<<"Resulted new word : "<<output;
    return 0;
}