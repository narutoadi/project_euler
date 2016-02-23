//Copy the matrics given in problem and paste it in the terminal... press enter and you will get the answer
#include<iostream>
#include<cstring>
#define ll long long
using namespace std;

char sum[10000];
int main()
{
char s[101];
int cnt=50,i,j,a,b,c,d,carry;
memset(sum,'0',sizeof(sum));
cin>>s;
for(i=49;i>=0;i--)
{
    sum[49-i]=s[i];
}
for(d=1;d<100;d++)
{
    cin>>s;
    carry=0;
    for(i=49;i>=0;i--)
    {
        a=s[i]-'0'+sum[49-i]-'0';
        sum[49-i]=(a%10)+'0'+carry;
        carry=a/10;
    }
    j=50;
    while(carry)
    {
        a=sum[j]-'0'+carry;
        sum[j]=(a%10)+'0';
        carry=a/10;
        j++;
    }
}
    i=200;
    while(sum[i]=='0')
    i--;
    cnt=i;
    cout<<cnt<<endl;
    ll ans=0;
    for(i=cnt;i>cnt-10;i--)
    cout<<sum[i];
    cin>>a;
    return 0;
}
