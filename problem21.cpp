#include<iostream>
#define ll long long
using namespace std;

ll dp[10002];
bool hash[10002]={0};

int main()
{
    ll i,j,x;
    for(i=1;i<=10000;i++)
    dp[i]=1L;

    for(i=2;i<=5000;i++)
    {
        for(j=2*i;j<=10000;j+=i)
        {
            //cout<<j<<" "<<endl;
            dp[j]+=i;
        }
    }
    //cout<<dp[220]<<" "<<dp[284]<<endl;
    ll sum=0;
    for(i=2;i<=10000;i++)
    {
        if(hash[i]==false)
        {
           // cout<<i<<endl;
            x=dp[i];
            if(x<=10000&&dp[x]==i&&x!=i)
            {
                hash[i]=1; hash[x]=1;
                sum+=(i+x);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
