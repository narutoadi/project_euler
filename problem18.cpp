#include<iostream>
#include<cstring>
#include<cmath>
#define ll long long
using namespace std;

// copy and paste the given pyramid for input of the following program :)

int main()
{
    ll a[15][15],i,j,k;
    for(i=0;i<15;i++)
    {
        for(j=0;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=13;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            k=(a[i+1][j]>=a[i+1][j+1]?a[i+1][j]:a[i+1][j+1]);
            a[i][j]+=k;
        }
    }
    cout<<a[0][0]<<endl;
    return 0;
}
