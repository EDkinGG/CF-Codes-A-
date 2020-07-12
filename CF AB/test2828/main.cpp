#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int fun(lli b,lli p,lli m )
{
    lli ret;
    if(p==0)
    {
        return 1;
    }
    if( p%2==0 )
    {
        ret=fun(b,p/2,m);
        return ((ret%m)*(ret%m))%m;
    }
    else
    {
        return ((b%m)*(fun(b,p-1,m))%m)%m;
    }
}

int main()
{
    lli b,p,m,ans;
    cin>>b>>p>>m;
    ans=fun(b,p,m);
    cout<<ans<<endl;

    return 0;
}
