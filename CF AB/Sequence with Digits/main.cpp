#include<bits/stdc++.h>

using namespace std;
typedef long long lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,k,ans;
        cin>>a>>k;
        ans=a;
        k--;
        while( k-- )
        {
            lli mn=100,mx=-1,x;
            x=ans;
            while( x )
            {
                mn=min(mn,x%10);
                mx=max(mx,x%10);

                x=x/10;
                if( mn==0 )
                {
                    break;
                }
            }
            ans=ans+mx*mn;
            if( mn==0 )
            {
                break;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
