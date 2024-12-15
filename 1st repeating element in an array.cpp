#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
        if(count>0)
        {
            cout<<"First repeated : "<<arr[i];
            break;
        }
    }
}