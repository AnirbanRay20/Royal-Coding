#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int max=0,max2=0;
    if(size<6)
    {
        ;
    }
    else
    {
        int arr[size];
        cout<<"Enter the elements of the array : \n";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        max=arr[0];
        //maximunm 1st
        for(int i=0;i<size;i++)
        {
            if(max<=arr[i])
            {
                max=arr[i];
            }
        }
        cout<<"First max : "<<max;
        //maximum 2nd
        max2=0;
        for(int i=0;i<size;i++)
        {
            if(max!=arr[i])
            {
                if(max2<=arr[i])
                    max2=arr[i];
            }
        }
        cout<<"\nSecond Max : "<<max2;
        //second max
        int max3=0;
        for(int i=0;i<size;i++)
        {
            if(max!=arr[i])
            {
                if(max2!=arr[i])
                {
                    if(max3<=arr[i])
                    {
                        max3=arr[i];
                    }
                }
            }
        }
        cout<<"\nThird Max : "<<max3;

        //First min
        int min=arr[0];
        for(int i=0;i<size;i++)
        {
            if(min>=arr[i])
            {
                min=arr[i];
            }
        }
        cout<<"\nFirst min : "<<min;
        //Second min
        int min2=32767;
        for(int i=0;i<size;i++)
        {
            if(min!=arr[i])
            {
                if(min2>=arr[i])
                {
                    min2=arr[i];
                }
            }
        }
        cout<<"\nSecond min : "<<min2;
        //Third Minimun
        int min3=32767;
        for(int i=0;i<size;i++)
        {
            if(min!=arr[i])
            {
                if(min2!=arr[i])
                {
                    if(min3>=arr[i])
                    {
                        min3=arr[i];
                    }
                }
            }
        }
        cout<<"\nThird min : "<<min3;
    }
    
}