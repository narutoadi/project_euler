#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
    ll a,b,c,i,ans,j,k;
    bool flag=0;
    for(a=1;a<=340;a++)
    {
        for(b=a+1;b<=680;b++)
        {
            k=a*a+b*b;
            c=sqrt(k);
            if(floor(sqrt(k))==ceil(sqrt(k)))
            {
                if(a+b+c==1000) {flag=1;ans=a*b*c;}

            }
        }
        if(flag==1) break;
    }

    cout<<ans<<endl;
    return 0;
}
