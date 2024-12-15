//Write a C++ program to implement a recursive function to count the number of occurrences of a specific element in an array of integers.

#include<iostream>
using namespace std;

int found(int Ar[], int start, int end, int ele)
{
    if(start>end)
    {
        return 0;
    }
    else if(Ar[start]!=ele)
    {
        start+=1;
        return 0 + found(Ar,start,end,ele);
    }
    else
    {
        start+=1;
        return 1 + found(Ar,start,end,ele);
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the elements of the array : \n";
    int i;
    int arr[size];
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the searching element to be counted : ";
    cin>>search;
    cout<<"Element found : "<<found(arr,0,size-1,search)<<" times";

    return 0;
}