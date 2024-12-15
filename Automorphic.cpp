//Automorphic or not
//A number whose square ends with the digits of actual number

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	int copy=num;
	int count_digits=0;
	do
	{
		copy/=10;
		count_digits++;
	}while(copy!=0);
	
	count_digits=pow(10,count_digits);
	int sq=num*num;
	if(sq%count_digits == num)
		cout<<"Number is Automorphic";
	else
		cout<<"Number is not Automorphic";
}
