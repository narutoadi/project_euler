#include<iostream>
#define ll long long
#include<cmath>
using namespace std;

int main()
{
    ll i,j,k,a,b,c=0;
    for(i=2;i<=10000000;i++)
    {
        j=i;
        b=0;
        while(j)
        {
            a=j%10;
            a=a*a*a*a*a;
            j=j/10;
            b+=a;
        }
        if(b==i) {
        //cout<<i<<endl;
         c+=i;}
    }
//    cout<<endl<<endl;
    cout<<c<<endl;
    return 0;
}
