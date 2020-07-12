#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int lli;

int main()
{
    lli n,t,temp,i;

    cin>>n>>t;

    if( n==1 && t==10 )
    {
        cout<<"-1"<<endl;
        return 0;
    }

    if( t<=9 )
    {
        for( i = 1 ; i<=n ;i++ )
        {
            cout<<t;
        }
    }
    else
    {
        for( i = 1 ; i<=n ;i++ )
        {
           if( i == 1 )
           {
               cout<<i;
           }
           else
           {
               cout<<0;
           }
        }
    }

    return 0;
}
