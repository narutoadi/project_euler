#include<iostream>
#include<cstring>
#define ll long long
using namespace std;

int main()
{
    char s[10000];
    int a,cnt,carry,b,c,i,j;
    memset(s,'0',sizeof(s));
    s[0]=1+'0';
    cnt=1;
    for(i=2;i<=100;i++)
    {
        carry=0;
        for(j=0;j<cnt;j++)
        {
            a=(s[j]-'0')*i+carry;
            s[j]=(a%10)+'0';
            carry=a/10;
        }
        while(carry)
        {
            s[j++]=carry%10+'0';
            carry/=10;
        }
        cnt=j;
    }
    ll sum=0;
    for(i=0;i<cnt;i++)
    sum+=s[i]-'0';

    cout<<sum<<endl;
    return 0;
}
