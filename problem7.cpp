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


int main()
{
    ll a=sieve();
    cout<<arr[10000]<<endl;

    return 0;
}


