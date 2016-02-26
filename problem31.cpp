#include<iostream>
#include<cstring>
#define ll long long
using namespace std;
int main()
{
	int a[]={0,1,2,5,10,20,50,100,200};
	ll dp[205],i,j,k;
	memset(dp,0,sizeof(dp));
	dp[0]=1;
	for(i=1;i<9;i++)
	{
		for(j=a[i];j<=200;j++)
		{
			dp[j]+=dp[j-a[i]];
		}
	}
	cout<<dp[200]<<endl;
	return 0;
}
