#include<iostream>
#include<cmath>
#define N 1000000
using namespace std;

bool prime[N+5]={0};

void sieve()
{
    long long i,j;
    prime[0]=1;
    prime[1]=1;
    for(i=2;i<=N;i++)
    {
        if(prime[i]==0)
        for( j=i*i;j<=N;j+=i)
        prime[j]=1;
    }
    cout<<"done"<<endl;
}

int main()
{
    sieve();
    bool flag;
    long long ans=0;
    int a,b,c,i,j,k;
    a=0;
    for(i=11;i<=N&&a<=11;i++)
    {
        if(prime[i]==1)
        continue;
        flag=0;
        j=i;
        j=j/10;
        while(j>0)
        {
            if(prime[j]==1)
            {
                flag=1;
                break;
            }
            j=j/10;
        }
        if(flag==0)
        {
            j=i;
            k=log10(j);
            b=pow(10,k);
            k=j/b;
            j=j-k*b;
            while(j>0)
            {
                if(prime[j]==1)
                {
                    flag=1;
                    break;
                }
                b=b/10;
                k=j/b;
                j=j-k*b;
            }
        }
        if(flag==0)
        {
            a++;
            cout<<a<<" "<<i<<endl;
            ans+=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
