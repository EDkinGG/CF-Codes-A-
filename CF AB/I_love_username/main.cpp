#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,i,cnt=0,mx=0,mn=0;
    cin>>n;

    lli a[n+1];

    cin>>a[0];
    mx=a[0];
    mn=a[0];

    for( i = 1 ; i<n ; i++ )
    {
        cin>>a[i];

        if( a[i]>mx )
        {
            mx=a[i];
            cnt++;
        }
        else if( a[i]<mn )
        {
            mn=a[i];
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
