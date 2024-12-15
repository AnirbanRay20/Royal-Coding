//C++ program to implement a class named BankAccount that has private member variable
// Account number and balance
//Function deposit and withdrawl

#include<iostream>
using namespace  std;

class BankAccount
{
	private:
		string acc_num;
		float balance;
		float amount;
	public:
		void getdata(void);
		void deposit(void);
		void withdrawl(void);
};

void BankAccount :: getdata(void)
{
	cout<<"Enter the account number : ";
	cin>>acc_num;
	cout<<"Enter the balance : ";
	cin>>balance;
	cout<<"Enter the amount : ";
	cin>>amount;
}

void BankAccount :: deposit(void)
{
	cout<<"New Balance : "<<(balance+amount);
}

void BankAccount :: withdrawl(void)
{
	if(balance<amount)
		{
			cout<<"Insufficient balance";
		}
	else
	{
		cout<<"New Balance : "<<(balance-amount);
	}
	
}

int main()
{
	BankAccount BA;
	BA.getdata();
	int cc;
	again:cout<<"Press 1. for Deposit\nPress 2. for withdrawl"<<endl;
	cout<<"Your choice : ";
	cin>>cc;
	if(cc==1)
	{
		BA.deposit();
	}
	else if(cc==2)
	{
		BA.withdrawl();
	}
	else
	{
		cout<<"Wrong input, try again\n";
		goto again;
	}
}
