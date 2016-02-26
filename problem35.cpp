#include<iostream>
#include<cmath>
#define N 1000004
#define ll long long
using namespace std;

bool prime[N]={0};
void sieve()
{
	int i,j;
	for(i=2;i<=1000;i++)
	{
	//	cout<<i<<endl;
		if(prime[i]==0)
		{
			for(j=i*i;j<N;j+=i)
			{
				prime[j]=1;
			}
		}
	}
}
int main()
{
	ll i,j,k,x,d,f,ans=4;
	sieve();
	for(i=11;i<=1000000;i++)
	{
	//	cout<<i<<endl;
		j=i;
			d=log10(j)+1;
			x=pow(10,d-1);
			while(d&&prime[j]==0)
			{
				f=j/x;
				j=j-f*x;
				j=j*10+f;
				d--;
			}
		if(d==0) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
