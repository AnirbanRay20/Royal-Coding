//Binary addition

#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int bTod(string bin)
{
    int pos=0;
    int sum=0;
    for(int i=bin.size()-1; i>=0; i--)
    {
        sum += (int(bin.at(i))-48)*pow(2,pos);
        pos++;
    }
    return sum;
}

int main()
{
    string bin1, bin2;
    cout<<"Enter the first binary number : ";
    cin>>bin1;
    cout<<"Enter the second binary number : ";
    cin>>bin2;
    int num1=bTod(bin1);
    int num2=bTod(bin2);
    int sum=num1+num2;
    string result="";
    while (sum!=0)
    {
        result+=to_string(sum%2);
        sum/=2;
    }
    reverse(result.begin(),result.end());
    cout<<"The sum of "<<bin1<<" and " <<bin2<<" is "<<result;
}