#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size : ";
    cin>>n;
    cout<<"Enter the elements of array of size n-1\n";
    int arr[n-1];
    for(i=0;i<n-1;i++)
        cin>>arr[i];
    
    int sum1=0,sum2=0;
    //Sum of n natural numbers
    for(i=1;i<=n;i++)
        sum1+=i;
    
    //Sum of elements of array
    for(i=0;i<n-1;i++)
        sum2+=arr[i];
    
    cout<<"The missing elememt is : "<<sum1-sum2;
    return 0;
}