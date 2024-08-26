//Write a C++ program to implement a recursive function to check if a given string is a palindrome.

#include<iostream>
using namespace std;

string Palindrome(string word, int start, int end, string reverse)
{
    if(end<start)
        return reverse;
    else
    {
        reverse+=word.at(end);
        end-=1;
        return Palindrome(word, start, end, reverse);
    }
}

int main()
{
    string word;
    cout<<"Enter a word : ";
    cin>>word;
    string reverse="";
    reverse=Palindrome(word, 0, word.size()-1, reverse);
    if(word.compare(reverse)==0)
        cout<<"Word is Palindrome";
    else
        cout<<"Word is \"NOT\" Palindrome";

    return 0;
}