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
        int value=i;
        while(j<=i)
        {
            cout<<value<<" ";
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}