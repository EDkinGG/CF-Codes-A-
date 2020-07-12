#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,q,i,j,x,t,in=0;

    cin>>n;

    lli a[100010];

    a[0]=0;
    t=1;

    for( i = 0 ; i<n ;i++ )
    {
        cin>>x;
        a[i+1]=t+x;
        t=a[i+1];
    }


    cin>>q;

    lli b[q];

    for( i = 0 ; i<q ;i++ )
    {
        cin>>b[i];

        in=upper_bound(a,a+n,b[i])-a;

        cout<<in<<endl;
    }


    return 0;
}
