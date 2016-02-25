#include<iostream>
#include<cstring>
#define ll long long
using namespace std;


int main()
{
    int i,j,k,index,cnt,a;
    char f[2000],s[2000],t[2000];
    memset(f,'0',sizeof(f));
    memset(s,'0',sizeof(s));
    memset(t,'0',sizeof(t));

    f[0]='1';
    s[0]='1';
    cnt=1;
    index=2;
    while(cnt<1000)
    {
        index++;
        int carry=0;
        for(i=0;i<cnt;i++)
        {
            a=f[i]-'0'+s[i]-'0'+carry;
           // cout<<"a = "<<a<<endl;
            t[i]=a%10+'0';
            //cout<<"t["<<i<<"] = "<<t[i]<<endl;
            carry=a/10;
        }
        //cout<<carry<<endl;
        while(carry)
        {
            t[i++]=carry%10+'0';
            carry=carry/10;
        }
        cnt=i;
        for(i=0;i<cnt;i++)
        f[i]=s[i];
        for(i=0;i<cnt;i++)
        s[i]=t[i];
       // for(i=0;i<cnt;i++)
        //cout<<t[i];
        //cout<<endl;
    }
    cout<<index<<endl;
    return 0;
}
