#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

int main()
{
    lli n,m,i;
    set<lli>s;

    cin>>n>>m;

    lli a[100005],l,d[100005];

    for( i = 1 ; i<n+1 ; i++)
    {
        cin>>a[i];
    }

    for( i = n ; i>=1 ; i--)
    {
        s.insert(a[i]);
        d[i]=s.size();
    }


    for( i = 0 ; i<m ; i++)
    {
        cin>>l;
        cout<<d[l]<<endl;
    }

    return 0;
}
