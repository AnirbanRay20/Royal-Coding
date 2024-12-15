#include<iostream>
using namespace std;
int main(){
    int n,temp=0;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in this array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //for number of passes
    for(int i=0;i<n-1;i++){
        //swapping of elements
        for(int j=0;j<(n-1-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //display the sorted array
    cout<<"The sorted array is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}