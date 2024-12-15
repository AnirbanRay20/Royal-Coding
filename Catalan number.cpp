//Catalan number of each within the range
//(2n!)/n!/(n+1)!
#include<iostream>
using namespace std;

int fact(int num)
{
	int f=1;
	for(int i=1;i<=num;i++)
	{
		f=f*i;
	}
	
	return f;
}

int main()
{
	int start,end;
	cout<<"Enter the starting : ";
	cin>>start;
	cout<<"Enter the ending : ";
	cin>>end;
	for(int i=start; i<=end; i++)
	{
		int cat = fact(2*i)/((fact(i)*fact(i+1)));
		cout<<"\nCatalan of "<<i<<" is : "<<cat;
	}
}