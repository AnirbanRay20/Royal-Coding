//Array in Array
/*
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3


5
9
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cout<<"Enter n : ";
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++)
    {
        /*int k;
        cout<<"Enter k : ";
        cin>>k;
        cout<<"Enter ele : "<<endl;
        vector<vector<int>> a(1,( vector<int> (k)));
        for(int j=0;j<k;j++)
        {
            cin>>a[i][j];
        }

        for(int j=0;j<k;j++)
        {
            cout<<a[i][j]<<" ";
        }*/
       cout<<"Enter k : ";
        int k;
        cin >> k ;
        a[i].resize(k);
        cout<<"Enter ele : "<<endl;
        for (int j = 0 ; j < k ; j++ )
        {
            cin >> a[i][j] ;
        }
        
    }

    for(int i=0;i<a.size();i++)   
    {
        for (int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}