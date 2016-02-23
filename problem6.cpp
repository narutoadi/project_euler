#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll a=0,b=0,c,i,j;
    for(i=1;i<=100;i++)
    {
        a+=i*i;
        b+=i;
    }
    b=b*b;
    c=b-a;
    cout<<c<<endl;
    return 0;

}

