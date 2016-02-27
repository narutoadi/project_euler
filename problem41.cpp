#include<iostream>
#define ll long long
using namespace std;

bool isprime(ll x)
{
    for(ll i=2;i*i<=x;i++)
    {
        if(x%i==0)
        return 0;
    }
    return 1;
}

bool ispandig(ll x)
{
    int i;
    int hash[8]={0};
    while(x)
    {
        i=x%10;
        if(i==0||i>7||hash[i]==1)
        return 0;
        hash[i]=1;
        x=x/10;
    }
    return 1;
}

int main()
{
    ll i,j,k,num,n,a,b,c;
    // generating all 7 digits pandigital numbers :)



    for(n=7654321;n>=1;n--)
    {
        if(ispandig(n)&&isprime(n))
        {
            cout<<n<<endl;
            break;
        }

    }
    return 0;
}
