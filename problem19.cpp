#include<iostream>
using namespace std;

int main()
{
    int leap[12]={1,32,61,92,122,153,183,214,245,275,306,336};
    int nleap[12]={1,32,60,91,121,152,182,213,244,274,305,335};
    int i,j,k;
    k=2;
    long long ans=0;
    for(i=1901;i<=2000;i++)
    {
        if(i%100==0&&i%400==0)
        {
            for(j=0;j<12;j++)
            {
                if((k+leap[j]-1)%7==0) ans++;
            }
            k=(k+367-1)%7;
        }
        else if(i%4==0)
        {
            for(j=0;j<12;j++)
            {
                if((k+leap[j]-1)%7==0) ans++;
            }
            k=(k+367-1)%7;
        }
        else
        {
            for(j=0;j<12;j++)
            {
                if((k+nleap[j]-1)%7==0) ans++;
            }
            k=(k+366-1)%7;
        }

    }
    cout<<ans<<endl;
    return 0;
}
