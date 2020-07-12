#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,t,x,mx,i,cnt,j;
    cin>>n>>t;

    lli a[n],b[n];

    for( i = 0 ; i<n ; i++ )
    {
        cin>>a[i];
    }

    x=0;
    mx=0;
    j=-1;

    for( i = 0 ; i<n ; i++ )
    {
        x=x+a[i];
        if(x>t)
        {
            j+=1;
            x=x-a[j];
        }
        mx=max(mx,i-j);
    }
    cout<<mx<<endl;

    return 0;
}
