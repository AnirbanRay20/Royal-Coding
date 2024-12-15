/* Create Anagram
*/
#include<iostream>
using namespace std;

bool isTrue(string word,string output,int size)
{
    int flag=0;
    if(output.at(0)==' ')
        return true;
    else
    {
        for(int i=0;i<size;i++)
        {
            if(word.at(i)==output.at(i))
                flag++;
        }
    }
    if(flag==size)
        return false;
    else
        return true;
}
int main()
{
    string word,output="";
    cout<<"Enter a word : ";
    cin>>word;
    int size=word.size();
    cout<<"New Words:\n";
    while(isTrue(word,output,size))
    {
        output="";
        for(int i=1;i<size;i++)
        {
            output+=word.at(i);
        }
        output+=word.at(0);
        cout<<output<<endl;
    }
    return 0;
}
