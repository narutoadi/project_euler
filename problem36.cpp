#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	ll i,j,k,a[27],b,c;
	ll sum=0;
	for(i=1;i<1000000;i++)
	{
		j=i;
		k=0;
		while(j)
		{
			k=k*10+j%10;
			j=j/10;
		}
		if(k==i)
		{
			while(k)
			{
				a[j++]=k%2;
				k=k/2;
			}
			bool flag=0;
			for(k=0;k<(j+1)/2;k++)
			{
				if(a[k]!=a[j-1-k])
				{
					flag=1; break;
				}
			}
			if(flag==0)
			sum+=i;
		}

	}
	cout<<sum<<endl;
	return 0;
}
