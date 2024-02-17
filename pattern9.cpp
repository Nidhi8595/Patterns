#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter any odd number as the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i&&j==n+1-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}