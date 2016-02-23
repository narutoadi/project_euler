#include<iostream>
#include<cstring>
#define ll long long
using namespace std;

int main()
{
    char s[10000];
    int carry,i,j,k,n;
    memset(s,'0',sizeof(s));
    s[0]='4';
    s[1]='2';
    s[2]='0';
    s[3]='1';
    int cnt=4;
    for(i=11;i<=1000;i++)
    {
        carry=0;
        for(j=0;j<cnt;j++)
        {
            k=s[j]-'0';
            n=k*2;
            s[j]=n%10+carry+'0';
            carry=n/10;
        }
        while(carry)
        {
            s[j++]=carry%10+'0';
            carry=carry/10;
        }
        cnt=j;
    }
    ll sum=0;
    for(j=0;j<cnt;j++)
    sum+=s[j]-'0';
    cout<<sum<<endl;
    return 0;
}
