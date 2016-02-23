#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll cnt=1,max=1,index=1,i,j;
    for(i=1;i<=1000000;i++)
    {
        j=i;
        cnt=1;
        while(j!=1)
        {
            if(j&1) j=3*j+1;
            else j=j/2;
            cnt++;
        }
        if(j==1)
        {
            if(cnt>max) max=cnt,index=i;
        }
    }
    cout<<index<<endl;
    return 0;
}
