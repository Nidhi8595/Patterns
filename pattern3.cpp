#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}