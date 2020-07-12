#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;


int main()
{
    lli n,t,c,i,cnt=0,c_cnt=0;

    cin>>n>>t>>c;
    lli a[n+100];

    for( i = 0 ; i<n ; i++ )
    {
        cin>>a[i];

        if( a[i]<=t )
        {
            c_cnt=c_cnt+1;

            if( c_cnt>=c )
            {
                cnt++;
            }
        }
        else
        {
            c_cnt=0;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
