//Digits to digits in words

#include<iostream>
#include<string>
using namespace std;

int checkZero(int arr[], int n)
{
    int flag=0;
    for(int i=n-1;i>=0;i--)
        if(arr[i]==0)
            flag=1;
        else
            flag=0;
    
    return flag;
}

string addOne(int n, string ww)
{
    switch(n)
    {
        case 1: ww += " One";
        break;
        case 2: ww += " Two";
        break;
        case 3: ww += " Three";
        break;
        case 4: ww += " Four";
        break;
        case 5: ww += " Five";
        break;
        case 6: ww += " Six";
        break;
        case 7: ww += " Seven";
        break;
        case 8: ww += " Eight";
        break;
        case 9: ww += " Nine";
        break;
    }
    
    return ww;
}

string addTenty(int n, string ww)
{
    switch(n)
    {
        case 0: ww += " Ten";
        break;
        case 1: ww += " Eleven";
        break;
        case 2: ww += " Tweleve";
        break;
        case 3: ww+= " Thirteen";
        break;
        case 4: ww+= " Forteen";
        break;
        case 5: ww += " Fifteen";
        break;
        case 6: ww += " Sixteen";
        break;
        case 7: ww += " Seventeen";
        break;
        case 8: ww += " Eighteen";
        break;
        case 9: ww += " Nineteen";
        break;
    }
    return ww;
}

string addTen(int n, string ww)
{
    switch(n)
    {
        case 2: ww += " Twenty";
        break;
        case 3: ww += " Thirty";
        break;
        case 4: ww += " Forty";
        break;
        case 5: ww += " Fifty";
        break;
        case 6: ww += " Sixty";
        break;
        case 7: ww += " Seventy";
        break;
        case 8: ww += " Eighty";
        break;
        case 9: ww += " Ninty";
        break;
    }
    
    return ww;
}

int main()
{
    string num;
    int i;
    cout<<"Enter a number : ";
    cin>>num;
    int size=num.length();
    string word="";
    int digit[size];
        for(i=0;i<size;i++)
        {
            digit[i]=int(num.at(i))-48;
        }
    if(checkZero(digit, size))
        word = "Zero";
    else
    {
        if(digit[size-2]==1)
        {
            word += addTenty(digit[size-1],"");   //for tens place but for tenth
        }
        else
        {   
            word += addOne(digit[size-1],"");   //for ones place normal
            word = addTen(digit[size-2],"") + word;  //for tens place normal except ten
        }

        int remain=3;
        string extra="";
        if(size>2)
        {
            for(i=size-3;i>=0;i--)
            {
                if(i==size-remain && digit[i]!=0) //Hundredth place
                {
                    word = addOne(digit[i], "") + " Hundred" + word;
                }
                else if(i==size-remain-1) //Thousandth place
                {
                    if(i-1==size-remain-2 || i==size-remain-1)
                    {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Thousand" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-1 && digit[i]!=0)
                            {
                                extra = addOne(digit[i], extra+"");
                                word = extra + " Thousand" + word;
                            }
                            else
                            {
                                word = extra + " Thousand" + word;
                            } 
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Thousand" + word;
                        }
                    }
                }
                else if(i==size-remain-3) //Lacs place
                {
                   if(i-1==size-remain-4 || i==size-remain-3) 
                   {
                     if(digit[i-1]==1)
                     {
                        word = addTenty(digit[i],"") + " Lacs" + word;
                     }
                     else if(digit[i-1]>=2 && digit[i-1]<=9)
                     {
                        extra = addTen(digit[i-1],"");
                        if(i==size-remain-3 && digit[i]!=0)
                            extra = addOne(digit[i], extra+"");
                        word = extra + " Lacs" + word;
                     }
                     else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Lacs" + word;
                        }
                    }
                }
                else if(i==size-remain-5) //Crore place
                {
                   if(i-1==size-remain-6 || i==size-remain-5) 
                   {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Crore" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-5 && digit[i]!=0)
                                extra = addOne(digit[i], extra+"");
                            word = extra + " Crore" + word;
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Crore" + word;
                        }
                    }
                }
                else if(i==size-remain-7) //Arab place
                {
                   if(i-1==size-remain-8 || i==size-remain-7) 
                   {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Arab" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-7 && digit[i]!=0)
                                extra = addOne(digit[i], extra+"");
                            word = extra + " Arab " + word;
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Arab" + word;
                        }
                    }
                }
                else if(i==size-remain-9) //Kharab place
                {
                   if(i-1==size-remain-10 || i==size-remain-9) 
                   {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Kharab" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-9 && digit[i]!=0)
                                extra = addOne(digit[i], extra+"");
                            word = extra + " Kharab " + word;
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Kharab" + word;
                        }
                    }
                }
                else if(i==size-remain-11) //Neel place
                {
                   if(i-1==size-remain-12 || i==size-remain-11) 
                   {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Neel" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-11 && digit[i]!=0)
                                extra = addOne(digit[i], extra+"");
                            word = extra + " Neel " + word;
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Neel" + word;
                        }
                    }
                }
                else if(i==size-remain-13) //Padma place
                {
                   if(i-1==size-remain-14 || i==size-remain-13) 
                   {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Padma" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-13 && digit[i]!=0)
                                extra = addOne(digit[i], extra+"");
                            word = extra + " Padma " + word;
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Padma" + word;
                        }
                    }
                }
                else if(i==size-remain-15) //Sankha place
                {
                   if(i-1==size-remain-16 || i==size-remain-15) 
                   {
                        if(digit[i-1]==1)
                        {
                            word = addTenty(digit[i],"") + " Sankha" + word;
                        }
                        else if(digit[i-1]>=2 && digit[i-1]<=9)
                        {
                            extra = addTen(digit[i-1],"");
                            if(i==size-remain-15 && digit[i]!=0)
                                extra = addOne(digit[i], extra+"");
                            word = extra + " Sankha " + word;
                        }
                        else if(digit[i]!=0)
                        {
                            word = addOne(digit[i],"") + " Sankha" + word;
                        }
                    }
                }
            }
        }
    
    }
    cout<<"In Words : "<<word;
    return 0;
}