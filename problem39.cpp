#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b)
{
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main()
{
    ll i,j,k,a,b,c,m,n,arr[1001]={0};
    for(n=1;n<=1000;n++)
    {
        for(m=n+1;m<=1000;m+=2)
        {
            for(k=1;;k++)
            {
                a=k*(m*m-n*n);
                b=k*2*m*n;
                c=k*(m*m+n*n);
                if(a+b+c>1000) break;
                arr[a+b+c]++;
            }
        }
    }
    ll max=0,index=0;
    for(i=1;i<=1000;i++)
    {
        if(arr[i]>max) max=arr[i],index=i;
    }
    cout<<index<<endl;
    return 0;
}

