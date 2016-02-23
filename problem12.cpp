#include<iostream>
#define ll long long
using namespace std;

ll func(ll a)
{
    ll prod=1,q,i;
  //  if(a%2==0) a=a/2;
    for(i=2;i*i<=a;i++)
    {
        q=0;
        while(a&&a%i==0)
        {
            q++;
            a=a/i;
        }
        prod*=(q+1);
    }
    if(a>1) prod*=2;
    return prod;
}
int main()
{
    ll a,b,c,f,s,fx,sx,i,x;

    for(i=1;i<=10000000;i++)
    {
        x=(i*(i+1))/2;
        if(func(x)>=500)
        {
         //   cout<<i<<endl;
            cout<<x<<endl;
            break;
        }
    }
    return 0;
}
