#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli k2,k3,k5,k6,Num256=0,Num32=0,sum=0;
    cin>>k2>>k3>>k5>>k6;

    //256
    if( k6<=k5 && k6<=k2 )
    {
        Num256=k6;
        k2=k2-k6;
    }

    else if( k5<=k2 && k5<=k6 )
    {
        Num256=k5;
        k2=k2-k5;
    }

    else
    {
        Num256=k2;
        k2=0;
    }


    //32
    if( k2<k3 )
    {
       Num32=k2;
    }
    else
    {
        Num32=k3;
    }

    sum=256*Num256+32*Num32;

    cout<<sum<<endl;

    return 0;
}
