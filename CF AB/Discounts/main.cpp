#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)

using namespace std;

typedef long long lli;

int main()
{
    FastIO;
    lli n,m,i,sum=0,ans=0;
    cin>>n;
    lli a[n];
    for( i = 0 ; i < n ; i++ )
    {
        cin>>a[i];
        sum+=a[i];
    }

    cin>>m;
    lli b[m];
    for( i = 0 ; i < m ; i++ )
    {
        cin>>b[i];
    }
    sort(a,a+n);

    for( i = 0 ; i < m ; i++)
    {
        ans=sum-a[n-b[i]];
        cout<<ans<<endl;
    }

    return 0;
}
