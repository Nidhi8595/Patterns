#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    i=1;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}