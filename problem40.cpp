#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char st[10000000];
int main()
{
    int i,j,k=1,l,m,n;
    for(i=1;k<=1000000;i++)
    {
        j=i;
        l=log10(j);
        m=pow(10,l);
        while(l>=0)
        {
            n=j/m;
            st[k++]=n+'0';
            j=j-n*m;
            m=m/10;
            l--;
        }
    }
    long long ans=1;
    for(i=1;i<=1000000;i*=10)
    {

        ans=ans*(st[i]-'0');
       // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
