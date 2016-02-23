//Largest prime factor
#include<iostream>
#include<cmath>
#define n sqrt(600851475143)
#define N 600851475143
#define ll long long
using namespace std;

bool prime[3000000];
int arr[3000000];

int sieve()
{
    int k=0;
    for(ll i=2;i<=n+1;i++)
    {
        if(!prime[i])
        {
            arr[k++]=i;
            for(ll j=i*i;j<=n+1;j+=i)
            prime[j]=1;
        }
    }
    return k;
}

bool isprime(ll a)
{
    for(ll i=2;i<=sqrt(a);i++)
    if(a%i==0) return 0;

    return 1;
}

int main()
{
    ll a,i;
    if(isprime(N)) cout<<N<<endl;
    else
    {
        a=sieve();
        for(i=a-1;i>=0;i--)
        {
            if(N%arr[i]==0) { cout<<arr[i]<<endl; break;}
        }
        //cout<<i<<endl;
    }

    return 0;
}

