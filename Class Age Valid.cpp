#include <iostream>
using namespace std;


class Person
{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};

Person::Person(int initialAge)
{
    // Add some more code to run some checks on initialAge
    if(initialAge<0)
    {
        this->age=0;
        cout<<"Age is not valid, setting age to 0."<<endl;  
    }
    else
    {
        age=initialAge;
    }
}

void Person::amIOld()
{
    // Do some computations in here and print out the correct statement to the console 
    if(this->age<13)
        cout<<"You are young."<<endl;
    else if(this->age>=13 && this->age<18)
        cout<<"You are a teenager."<<endl;
    else if(this->age>=18)
        cout<<"You are old."<<endl;
        
}

void Person::yearPasses()
{
    // Increment the age of the person in here
    this->age=this->age+1;
    //cout<<this->age<<endl;

}

int main()
{
    int t;
	int age;
    cout<<"Enter the number of inputs : ";
    cin >> t;
    for(int i=0; i < t; i++) 
    {
        cout<<"Enter the age : "<<endl;
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) 
        {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}