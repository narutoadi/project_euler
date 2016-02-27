#include<iostream>
#define ll long long
using namespace std;

ll gcd(ll a,ll b)
{
    if(a%b==0)  return b;
    else return gcd(b,a%b);
}
int main()
{
    long long i,f,t,s=2,sum,j;
    for(i=3;i<=20;i++)
    {
        t=gcd(s,i);
        s=((s*i)/t);
    }
    cout<<s<<endl;
    return 0;

}

