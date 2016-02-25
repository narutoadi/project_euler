#include<iostream>
#define ll long long
#define N 20
using namespace std;

ll cnt=0;



int main()
{
    ll dp[21][21],i,j;
    for(i=0;i<=N;i++)
    dp[i][0]=dp[0][i]=1;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }

    cout<<dp[N][N]<<endl;
    return 0;
}

