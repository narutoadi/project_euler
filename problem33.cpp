#include<iostream>
#include<map>
#include<cmath>
#define ll long long
using namespace std;

ll gcd(ll a,ll b)
{
	if(a%b==0) return b;
	return gcd(b,a%b);
}

int main()
{
	ll i,j,x,y,k,num,den,n1,n2,n3,g,ans_n=1,ans_d=1,d1,d2,d3,a[10][20],index[10]={0};

	map<ll,ll>m;

	for(i=11;i<=99;i++)
	{
		if(i%10==0) continue;
		x=i%10;
		a[x][index[x]++]=i;
		y=i/10;
		a[y][index[y]++]=i;
	}
	/*
	for(i=0;i<20;i++)
	{
		for(j=1;j<=9;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	*/

	for(i=1;i<=9;i++)
	{
		for(j=0;j<index[i]-1;j++)
		{
			num=a[i][j];
		//	cout<<num<<endl;
			if(num%10==i)
			n1=num/10;
			else
			n1=num%10;
			for(k=j+1;k<index[i];k++)
			{
			//	cout<<num<<"/"<<den;
				den=a[i][k];
				if(den%10==i)
				d1=den/10;
				else
				d1=den%10;
			//	cout<<" "<<n1<<"/"<<d1;
				g=gcd(n1,d1);
				n2=n1/g;
				d2=d1/g;
			//	cout<<" "<<n2<<"/"<<d2;
				g=gcd(num,den);
				n3=num/g;
				d3=den/g;
			//	cout<<" "<<n3<<"/"<<d3<<endl;
				if(n3==n2&&d3==d2&&(num/den)<1)
				{
					if(m[num]!=den)
					{
					//	cout<<num<<"/"<<den<<endl;
						ans_n*=n3;
						ans_d*=d3;
				//		cout<<"hu ha ha ha"<<endl;
						m[num]=den;
					}

				}
			}
		}
	}
	g=gcd(ans_n,ans_d);
	ans_n/=g;
	ans_d/=g;
	//cout<<ans_n<<"/"<<ans_d<<endl;
    cout<<ans_d<<endl;
	return 0;
}
