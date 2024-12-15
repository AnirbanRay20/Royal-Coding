/*Complex number class 
Two attributes are real and imaginary 
Functions to add subtract and multiply and display*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        float real1;
        float imagine1;
        float real2;
        float imagine2;
    
    public:
        void getdata(void);
        void add(void);
        void subtract(void);
        void multiply(void);
};

void Complex :: getdata(void)
{
    cout<<"Enter the real part of the first number : ";
    cin>>real1;
    cout<<"Enter the imaginary part of the first number : ";
    cin>>imagine1;
    cout<<"Enter the real part of the second number : ";
    cin>>real2;
    cout<<"Enter the imaginary part of the second number : ";
    cin>>imagine2;
}

void Complex :: add(void)
{
    float real=real1+real2;
    float imagine=imagine1+imagine2;
    cout<<"\nAdded complex number is : ("<<real<<") + ("<<imagine<<"i)";
}

void Complex :: subtract(void)
{
    float real=real1-real2;
    float imagine=imagine1-imagine2;
    cout<<"\nDifference of first to second complex number is : ("<<real<<") + ("<<imagine<<"i)";
}

void Complex :: multiply(void)
{
    float real=(real1*real2)-(imagine1*imagine2);
    float imagine=(real1*imagine2)+(imagine1*real2);
    cout<<"\nProduct of the complex numbers is : ("<<real<<") + ("<<imagine<<"i)";
}

int main()
{
    Complex com;
    com.getdata();
    com.add();
    com.subtract();
    com.multiply();

    return 0;
}