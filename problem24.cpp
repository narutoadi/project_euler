#include<iostream>
#include<cmath>
#include<vector>
#define ll long long
using namespace std;
/// This question can be easily solved using pen and paper , I tried to figure out first few digits here and calculated rest on paper ..
/// It is really easy try it yourself ;)
int main()
{
    ll i,j,k,fact[12],x;

    fact[0]=1;
    for(i=1;i<=10;i++)
    fact[i]=fact[i-1]*i;

    vector<int>v;
    for(i=0;i<=9;i++)
    v.push_back(i);
    ll n=1000000;
    ll ans[10];
    k=0;
    vector<int>::iterator it;
    while(n)
    {
        for(i=1;fact[i]<=n;i++);
        cout<<"i = "<<i<<endl;
        x=n/fact[i-1];
        cout<<"x = "<<x<<endl;
        n=n%fact[i-1];
        if(n==0) break;
        for(it=v.begin(),j=0;j<x;j++,it++);
        ans[k++]=*(it);
        v.erase(it);

        cout<<ans[k-1]<<endl;
    }
    return 0;
}
