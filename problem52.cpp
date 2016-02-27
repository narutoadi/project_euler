#include<iostream>
#include<set>
#define ll long long
using namespace std;

int main()
{
    ll i,j,k,a,b,c;

    for(i=11;;i++)
    {
        j=i;
        b=0;
        set<int>s;
        while(j)
        {
            s.insert(j%10);
            j=j/10;
            b++;
        }
        a=s.size();
        for(k=2;k<=6;k++)
        {
            c=0;
            j=i*k;
            while(j)
            {
                s.insert(j%10);
                j=j/10;
                c++;
            }
            if(s.size()!=a||b!=c)
            break;
        }
        if(k==7)
        {
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}
