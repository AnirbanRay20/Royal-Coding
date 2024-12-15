//Write a c++ Program to Find the Sum of the Series 1/1!+1/2!+1/3!+…1/N!
#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int j=1;j<=num;j++)
    {
        fact*=j;
    }
    return fact;
}

int main()
{
    int last;
    cout<<"Enter the last number : ";
    cin>>last;
    double sum=0.0;
    for(int i=1;i<=last;i++)
    {
        sum+=1.0/factorial(i);
    }      
    cout<<"The sum of the series is : "<<sum;
}