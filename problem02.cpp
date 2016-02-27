#include<iostream>
using namespace std;

int main()
{
    long long f,t,s,sum,j;
    f=1;s=2;sum=2;t=2;j=2;
    while(t<=4000000)
    {

        t=f+s;
        f=s;
        s=t;
        j++;
    //    cout<<j<<" "<<t<<" ";
        if(t<=4000000&&t%2==0)
        sum+=t;
      //  cout<<sum<<endl;

    }
    cout<<sum<<endl;
    return 0;

}
