//Find Armstrong number using class object

#include<iostream>
#include<cmath>
using namespace std;

class Armstrong
{
    private:
        int num;
        int result;
        int count;
    public:
        void getData(void);
        void calculate(void);
        void display(void);
};

void Armstrong :: getData(void)
{
    cout<<"Enter a number : ";
    cin>>num;
}

void Armstrong :: calculate(void)
{
    int cc=0;
    int copy=num;
    do
    {
        cc++;
        copy/=10;
    } while(copy!=0);

    copy=num;
    count=cc;
    int res=0;
    do
    {
        res+=pow(copy%10,count);
        copy/=10;
    } while(copy!=0);
    result=res;
}

void Armstrong :: display(void)
{
    if(result==num)
        cout<<"Number is Armstrong";
    else
        cout<<"Number is \"NOT\" Armstrong";
}

int main()
{
    Armstrong amgs;
    amgs.getData();
    amgs.calculate();
    amgs.display();

    return 0;
}