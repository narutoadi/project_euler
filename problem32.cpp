#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>
#define N 10000
#define ll long long
using namespace std;

vector<int> pd;

void gen_pandigital()
{
	int i,j;
	int hash[10]={0};
	bool flag;
//	cout<<pd.size()<<endl;

	for(i=1;i<N;i++)
	{
	//	cout<<i<<endl;
		memset(hash,0,sizeof(hash));
		j=i;
		flag=0;
		while(j)
		{
			if(j%10==0||hash[j%10]>0)
			{
				flag=1;
				break;
			}
			hash[j%10]++;
			j/=10;
		}
		if(flag==0)
		pd.push_back(i);
	}
//	cout<<"done"<<endl;
}

int main()
{
	ll i,j,k,a,b,x,c,ans=0,hash[10],hash1[10],hash2[10];
	bool flag=0;
	gen_pandigital();

	//cout<<pd[pd.size()-1]<<endl;
	set<int>s;
	vector<int>::iterator it,jt;
	for(it=pd.begin();it!=pd.end()-1;it++)
	{
		x=*it;
	//	cout<<x<<endl;
		memset(hash,0,sizeof(hash));
		while(x)
		{
			hash[x%10]=1;
			x=x/10;
		}
		for(jt=it+1;jt!=pd.end();jt++)
		{
			x=*jt;
			flag=0;
			memset(hash1,0,sizeof(hash1));
			while(x)
			{
				if(hash[x%10]==1)
				{
					flag=1;
					break;
				}
				hash1[x%10]=1;
				x=x/10;
			}

			if(flag==0)
			{
				memset(hash2,0,sizeof(hash2));
				x=(long long)(*it) * (*jt);
				while(x)
				{
					if(hash[x%10]==1||hash1[x%10]==1||hash2[x%10]==1)
					{
						flag=1;
						break;
					}
					hash2[x%10]=1;
					x=x/10;
				}
				if(flag==0)
				{
					for(i=1;i<=9;i++)
					{
						if(!((hash[i]==1&&hash1[i]==0&&hash2[i]==0)||(hash[i]==0&&hash1[i]==1&&hash2[i]==0)||(hash[i]==0&&hash1[i]==0&&hash2[i]==1)))
						{
							flag=1;
							break;
						}
					}
					if(hash[0]==1||hash1[0]==1||hash2[0]==1)
					flag=1;
				}
				if(flag==0)
				{

	//				cout<<*it<<" "<<*jt<<" "<<(*it)*(*jt)<<endl;
					s.insert((*it)*(*jt));
				}
			}
		}
	}
	set<int>::iterator is;
	for(is=s.begin();is!=s.end();is++)
	ans+=*is;
	cout<<ans<<endl;

	return 0;
}
