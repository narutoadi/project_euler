#include<iostream>
#include<cstring>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
    int dp[1001],i,j;
    memset(dp,0,sizeof(dp));
    dp[0]=0;
    dp[1]=3;
    dp[2]=3;
    dp[3]=5;
    dp[4]=4;
    dp[5]=4;
    dp[6]=3;
    dp[7]=5;
    dp[8]=5;
    dp[9]=4;
    dp[10]=3;
    dp[11]=6;
    dp[12]=6;
    dp[13]=8;
    dp[14]=8;
    dp[15]=7;
    dp[16]=7;
    dp[17]=9;
    dp[18]=8;
    dp[19]=8;
    dp[20]=7;
    dp[30]=6;
    dp[40]=5;
    dp[50]=5;
    dp[60]=5;
    dp[70]=7;
    dp[80]=6;
    dp[90]=5;
    dp[100]=10;
    dp[1000]=11;
    for(i=21;i<=999;i++)
    {
        if(dp[i]==0)
        {
            if(ceil(log10(i))==2)
            {
                dp[i]=dp[i%10]+dp[i-i%10];
            }
            else
            {
                if(i%100==0)
                dp[i]=dp[i/100]+dp[i%100]+7;
                else
                dp[i]=dp[i/100]+dp[i%100]+10;
            }
        }
    }
 //   cout<<dp[42]<<endl;
   // cout<<dp[342]<<endl;
    //cout<<dp[115]<<endl;
    ll ans=0;
    for(i=1;i<=1000;i++)
    {
        ans+=dp[i];
    }
    cout<<ans<<endl;
    return 0;
}
