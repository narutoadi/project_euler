//Largest palindrome product
#include<iostream>
#define ll long long
using namespace std;

bool ispalin(ll n)
{
    ll t1=n,t2=0;
    while(n)
    {
        t2=t2*10+n%10;
        n=n/10;
    }
    if(t1==t2) return 1;
    else return 0;
}
int main()
{
    long long i,j,k,x=0;

    for(i=999;i>=100;i--)
    {
        for(j=999;j>=100;j--)
        {
            k=i*j;
            if(ispalin(k)&&k>x)
            x=k;
        }
    }
    cout<<x<<endl;
    return 0;

}


