/* Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space. */

#include <iostream>
using namespace std;

int main()
{
    string test="jis college of enginnering";
    
    string output = "";
    int index = 0;
    
    while(index < test.size())
    {
        char ch = test.at(index);
        
        if(index == 0)
        {
            output += (char)((int)(test.at(index)) - 32);
            index++;
        }
        
        else if(ch != ' ')
        {
            output += ch;
            index++;
        }
        else if(ch == ' ')
        {
            output += ch;
            output += (char)((int)(test.at(index+1)) - 32);
            index += 2;
        }
    }
    cout << output<< endl;
    return 0;
}
