#include<iostream>
#include<cmath>
#define n sqrt(2000000)
#define N 2000000
#define ll long long
using namespace std;

bool prime[3000000];
int arr[3000000];

ll sieve()
{
    ll k=0;
    for(ll i=2;i<=N;i++)
    {
        if(!prime[i])
        {
      //      cout<<i<<" ";
            k+=i;
        //    cout<<k<<endl;
            for(ll j=i*i;j<=N;j+=i)
            prime[j]=1;
        }
    }
    return k;
}


int main()
{
    ll a=sieve();
    cout<<a<<endl;

    return 0;
}



