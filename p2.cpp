#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int count=1;
    i=1;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}