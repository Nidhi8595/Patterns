#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the value of n\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(j==i||j==n+1-i)
            {
                if(i%2!=0)
                {
                    cout<<j;
                }
                else
                {
                    cout<<char(j+64);
                }
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}