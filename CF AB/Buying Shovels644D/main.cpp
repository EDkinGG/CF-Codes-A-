#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t;

    cin>>t;

    while( t-- )
    {
        lli n,k,ans;
        cin>>n>>k;

        ans=n;

        if( k>=n )
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            for( lli j = 2 ; j*j<=n; j++ )
            {
                if( n%j==0 )
                {
                    if( n/j<=k )
                    {
                        if(j<=ans)
                        {
                            ans=j;
                        }
                        break;
                    }
                    if( j<=k)
                    {
                        if(n/j<=ans)
                        {
                            ans=n/j;
                        }
                    }

                }
            }
            cout<<ans<<endl;

        }
    }


    return 0;
}
