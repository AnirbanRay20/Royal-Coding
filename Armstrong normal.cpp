#include<iostream>
#include<cmath>
using namespace std;

void Armstrong(int num, int count)
{
    int copy=num;
    int result=0;
    do
    {
        result+=pow(copy%10,count);
        copy/=10;
    } while (copy!=0);

    if(result==num)
        cout<<"Number is Armstrong";
    else
        cout<<"Number is \"NOT\" Armstrong";
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int copy=num;
    int count=0;
    do
    {
        count++;
        copy/=10;
    }while(copy!=0);

    Armstrong(num,count);
    return 0;
}