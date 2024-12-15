#include<iostream>
using namespace std;

void insertion_sorting(int arr[], int n, int s);
void Binary_Search(int arr[], int n, int s);

int main()
{
    int size,i;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int A[size];
    cout<<"Enter the elements in the array : \n";
    for(i=0;i<size;i++)
        cin>>A[i];
    
    int search;
    cout<<"Enter the element to be searched : ";
    cin>>search;

    cout<<"The array is being sorted for performing Binary Search\n";
    cout<<"New Sorted array : ";
    insertion_sorting(A, size, search);
    return 0;
}

void insertion_sorting(int arr[], int n, int s)
{
    for(int i=0;i<n;i++)
    {
        int j=i-1;
        int x=arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    //now performing binary search
    Binary_Search(arr, n, s);
}

void Binary_Search(int arr[], int n, int s)
{
    int l=1;
    int h=n;
    int mid=0;
    int pos=0;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(s==arr[mid])
            {
                pos=mid;
                break;
            }
        else if(s<arr[mid])
            h=mid-1;
        else if(s>arr[mid])
            l=mid+1;
    }

    if(pos!=0)
        cout<<"\nElement found in the sorted array at : "<<pos;
    else
        cout<<"\nElement is not present";
}