#include<iostream>
#include<cmath>
#define ll long long
#define N 100000 /// The trick in this problem is to choose the correct value for N... just put a little more of your brain and you will know how to
///decide the min value for n
using namespace std;

int main()
{
	int i,j,k,a,b,c;
	int fact[10];
	fact[0]=1;
	for(i=1;i<10;i++)
	fact[i]=fact[i-1]*i;
	///cout<<fact[9]<<endl;
	ll sum=0;

	for(i=11;i<=N;i++)
	{
		j=i;
		a=0;
		while(j)
		{
			k=j%10;
			a+=fact[k];
			j=j/10;
		}
		if(a==i)
		sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}
