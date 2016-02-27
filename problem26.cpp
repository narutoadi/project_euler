#include<iostream>
#include<vector>
#include<cstring>
#define pb push_back
using namespace std;
int main()
{
	int n,x,i,j,d,cycle,max=0;
	bool hash[1000];

	for(d=2;d<1000;d++)
	{
		cycle=0;
		memset(hash,0,sizeof(hash));
		vector<int> v;
		v.pb(1);
		n=10;
		x=1;
		do
		{
			hash[x]=1;
			if(n<d)
			{
				x=n;
				v.pb(n);
				n*=10;
			}
			else
			{
				x=n%d;
				n=x*10;
				v.pb(x);
			}
		}while(x!=0&&hash[x]==0);
		if(x==0)
		cycle=0;
		else
		{
			cycle=1;
			for(i=v.size()-2;v[i]!=x&&i>=0;i--,cycle++);
			if(cycle>max) max=cycle;
			//if(d<1000)
			//cout<<d<<" "<<cycle<<endl;
		}
	}

	cout<<max+1<<endl; /// don't ask why added one ... just put some brain :p
	return 0;
}
