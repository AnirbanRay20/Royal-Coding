#include<iostream>
using namespace std;

class Evaluate
{
	int num1,num2;
	public:
	 void addition()
	 {
		cout<<"Enter two numbers : ";
		cin>>num1>>num2;
		cout<<"Sum is : "<<num1+num2;
	 }
	
	 void substraction1()
	 {
		cout<<"Enter two numbers : ";
		cin>>num1>>num2;
		cout<<"Difference 1st-2nd : "<<num1-num2;
	 }
	
	 void substraction2()
	 {
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
		cout<<"Differnce 2nd-1st : "<<num2-num1;
	 }
	
	 void multiplication()
	 {
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
		cout<<"Product : "<<num1*num2;
 	 }
	
	 void division1()
	 {
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
		cout<<"Quotient 1st/2nd : "<<num1/num2;
	 }
	
	 void division2()
	 {
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
		cout<<"Quotient 2nd/1st : "<<num2/num1;
	 }
	
	 void remainder1()
	 {
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
		cout<<"Division 1st%2nd : "<<num1%num2;
	 }
	
	 void remainder2()
	 {
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
		cout<<"Division 2nd%1st : "<<num2%num1;
	 }
};

void choose_part()
{
	Evaluate eval;
	int choice;
	cout<<"Enter Your choice for calculation on two numbers : ";
	cout<<"\n1 for addition";
	cout<<"\n2 for substraction 1";
	cout<<"\n3 for substraction 2";
	cout<<"\n4 for multiplication";
	cout<<"\n5 for division 1";
	cout<<"\n6 for division 2";
	cout<<"\n7 for remainder 1";
	cout<<"\n8 for remainder 2";
	cin>>choice;
	switch(choice)
	{
		case 1:
			eval.addition();
			break;
		case 2:
			eval.substraction1();
			break;
		case 3:
			eval.substraction2();
			break;
		case 4:
			eval.multiplication();
			break;
		case 5:
			eval.division1();
			break;
		case 6:
			eval.division2();
			break;
		case 7:
			eval.remainder1();
			break;
		case 8:
			eval.remainder2();
			break;
		default :
			cout<<"Only enter inputs from 1 to 8";
			break;
    }
}

int main()
{
	system("color 70");
	choose_part();
	return 0;
}