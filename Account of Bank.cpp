//Create Account

/*
Select one option below
1. Open Account
2. Balance Enquiry
3. Deposit
4. Withdrawl
5. Close an account
6. Show all account
7. Quit

Enter your choice = 1
Enter 1st name = ABC
Enter last name = EFG
Account no. = 1
Balance = 10000
*/

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Bank
{
    private:
        string fname;
        string lname;
        int acc, bal, money;

    public:
        Bank()
        {
            fname="";
            lname="";
            acc=0;
            bal=0;
            money=0;
        }
        Bank(string name, int accu, int bala)
        {
            
        }
        void nameData();
        void balance();
        void deposit();
        void withdrawal();
        void Account();
        void display();
};

void Bank :: nameData(void)
{
    cout<<"Enter the First name : ";
    cin>>fname;
    cout<<"Enter the Last name : ";
    cin>>lname;
}

void Bank :: balance(void)
{
    cout<<"Your Balance is : ";
    cin>>bal;
}

void Bank :: deposit(void)
{
    cout<<"Enter the money to be deposit : ";
    cin>>money;
    bal=bal+money;
    cout<<money<<" has been credited to your account"<<endl;
    cout<<"New Balance : "<<bal;
}

void Bank :: withdrawal(void)
{
    cout<<"Enter the money to be withdrawal : ";
    cin>>money;
    if(bal<money)
        cout<<"Ammount cannot be debited to insufficient Balance";
    else
        {
            bal=bal-money;
            cout<<money<<" has been debited from your account"<<endl;
            cout<<"New Balance : "<<bal;
        }
}

void Bank :: Account(void)
{
    acc=acc+1;
}

int main()
{
    Bank b;
    int choice;
    cout<<"First you have to make an Account to exist to access all the feature"<<endl;
    b.nameData();
    int acco=1;
    cout<<"Enter the initial balance to start the make balance : ";

    cout<<"Select one option below"<<endl;
    cout<<"1. Open New Account"<<endl;
    cout<<"2. Balance Enquiry"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdrawal"<<endl;
    cout<<"5. Close an account"<<endl;
    cout<<"6. Show all account"<<endl;
    cout<<"7. Quit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"You chose to make one more account to your Bank"<<endl;

    }

}