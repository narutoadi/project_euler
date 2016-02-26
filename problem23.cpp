#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

// I think this one is very unoptimized, your suggestions to optimize this code are welcome :)

ll funcn(int i)
{
	ll x=1,j;
	for(j=2;j<i;j++)
	if(i%j==0) x+=j;
	return x;
}
int main()
{
	ll i,j,x,k,a,b,c;
	bool arr[28122]={false};
	arr[12]=true;
	for(i=13;i<=28121;i++)
	{
		x=funcn(i);
		if(x>i) arr[i]=true;
	}
	ll sum=23*12;
	bool flag;
	for(i=24;i<=28123;i++)
	{
		flag=0;
		for(j=12;j<=i-12;j++)
		{
			if(arr[j]==true&&arr[i-j]==true)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			sum+=i;
//			cout<<i<<endl;
		}
	}
	cout<<sum<<endl;
	return 0;
}
