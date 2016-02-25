#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll i=1,j,n=1000,sum=0,x,y=10000000000;
    for(i=1;i<=n;i++)
    {
        x=i;
        for(j=1;j<i;j++)
        {
            x=(x*i)%y;
        }
        sum=(sum+x)%y;

    }
    cout<<sum<<endl;
    return 0;
}
