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
            output+=ch;
        else if(ch>='A' && ch<='Z')
        {
            output+=(char)((int)ch + 32);
        }
        else
            output+=ch;
    }
    
    word="";
    for(i=0;i<size;i++)
    {
        char ch=output.at(i);
        if(i%2==0 && (ch>='a' && ch<='z'))
            word+=ch;
        else if(i%2!=0 && (ch>='a' && ch<='z'))
            word+=(char)((int)ch - 32);
        else
            word+=ch;
    }

    cout<<"Resulted new word : "<<word;
    return 0;
}