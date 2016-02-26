#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ll x=1,sum=1,i,j,k;
    for(i=2;;i+=2)
    {
        for(j=1;j<=4;j++)
        {
            x=x+i;
            if(x>1002001) break;
            sum+=x;
        }
        if(x>1002001) break;
    }
    cout<<sum<<endl;
    return 0;
}
