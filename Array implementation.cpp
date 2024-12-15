/*C++ Program to implement operation on array 
1. insertion
2. deletion
3. searching
*/

#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of the array : ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nOriginal array : "<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	int choice;
	again: cout<<"\n\nChoosing time : "<<endl;
	cout<<"1. For insertion of more elements to the array"<<endl;
	cout<<"2. For deletion of elements from the array"<<endl;
	cout<<"3. For searching an element if present in the array"<<endl;
	cout<<"0. For stoping the process"<<endl;
	cout<<"Your choice : ";
	cin>>choice;
	if(choice!=0)
	{
		switch(choice)
		{
			case 1:
			{
				cout<<"You chose insertion"<<endl;
				int new_size;
				cout<<"Enter the number of new element : ";
				cin>>new_size;
				new_size=new_size+size;
				int AR[new_size];
				int i;
				for(i=0;i<size;i++)
				{
					AR[i]=arr[i];
				}
				cout<<"Enter the new elements of the new array : "<<endl;
				for(i;i<new_size;i++)
				{
					cin>>AR[i];
				}
				cout<<"New Array : "<<endl;
				for(i=0;i<new_size;i++)
				{
					cout<<AR[i]<<" ";
				}
			}
			break;
				
			case 2:
			{
				cout<<"You chose deletion"<<endl;
				int del;
				cout<<"Enter the how many number you want to delete : ";
				cin>>del;
				cout<<"New Array : "<<endl;
				for(int i=0;i<size-del;i++)
				{
					cout<<arr[i]<<" ";
				}
			}
			break;
				
			case 3:
			{
				cout<<"You chose searching"<<endl;
				int search;
				cout<<"Enter the element to be searched : ";
				cin>>search;
				int flag=1;
				int index;
				for(int i=0;i<size;i++)
				{
					if(search==arr[i])
					{
						index=i;
						flag=0;
						break;
					}
				}
				
				if(flag==0)
					cout<<"Element found at index number : "<<index;
				else
					cout<<"Element not found";
			}	
			break;
				
			default:
			{
				cout<<"Invalid choice";
				goto again;
			}
		}
		goto again;
	}
	return 0;
}
