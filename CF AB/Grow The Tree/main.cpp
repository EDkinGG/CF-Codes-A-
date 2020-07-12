#include<bits/stdc++.h>
using namespace std;
typedef long long lli;

int main()
{
    lli n,s=0,l=0;
    cin>>n;
    lli a[n];
    for( int i = 0 ; i<n ; i++ )
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for( int i = 0 ; i<n ; i++ )
    {
        if( i < n/2 )
        {
            s+=a[i];
        }
        else
        {
            l+=a[i];
        }
    }

    cout<<s*s+l*l<<endl;

    return 0;
}
