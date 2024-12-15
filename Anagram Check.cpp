/**
Check anagram of word
*/

#include<iostream>
using namespace std;



int main()
{
    string word1,word2,output="Words are not Anagram to each other";
    cout<<"Enter the two words to check for Anagram : \n";
    cin>>word1>>word2;
    int size1=word1.size();
    int size2=word2.size();
    int i;
    if(size1!=size2)
        cout<<"Words are not Anagram to each other";
    else
    {
        char W1[size1],W2[size2];
        //insertion of word1 to W1
        for(i=0;i<size1;i++)
        {
            W1[i]=word1.at(i);
        }
        //insertion of word2 to W2
        for(i=0;i<size2;i++)
        {
            W2[i]=word2.at(i);
        }
        //Insertion Sorting the W1
        for(i=1;i<size1;i++)
        {
            int j=i-1;
            int x=W1[i];
            while(j>-1 && (int)(W1[j])>x)
            {
                W1[j+1]=W1[j];
                j--;
            }
            W1[j+1]=(char)x;
        }
        //Insertion Sorting the W2
        for(i=1;i<size2;i++)
        {
            int j=i-1;
            char x=W2[i];
            while(j>-1 && W2[j]>x)
            {
                W2[j+1]=W2[j];
                j--;
            }
            W2[j+1]=x;
        }
        //Checking Anagram
        for(i=0;i<size1;i++)
        {
            if(W1[i]==W2[i])
                output="Words are Anagram to each other";
            else
            {
                output="Words are not Anagram to each other";
                break;
            }
        }
        cout<<output;
    }
    
}