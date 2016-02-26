#include<iostream>
#include<cmath>
#define N 1000004
#define ll long long
using namespace std;

bool prime(ll a)
{
	if(a<=1) return 0;
	int i;
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
		return 0;
	}
	return 1;
}


int main()
{

	ll a,b,n,m,max=0,count,ans,A,B;
	for(a=-999;a<1000;a++)
	{
		for(b=-999;b<1000;b++)
		{
			for(n=0;;n++)
			{
				if(prime(n*n+a*n+b)==0) break;
			}
			count=0;
			for(m=-1;;m--)
			{
				if(prime(m*m+a*m+b)==0) break;
				count++;
			}
			if(n+count>max)
			{
				ans=a*b;
				max=n+count;
				A=a;
				B=b;
			}
		}
	}
	///cout<<max<<" "<<A<<" "<<B<<endl;
	cout<<ans<<endl;
	return 0;
}
