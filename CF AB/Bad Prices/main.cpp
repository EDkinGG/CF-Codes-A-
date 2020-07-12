#include<bits/stdc++.h>

using namespace std;

int a[1000001];

int main()
{
    int t,n,i,j,ans,r_min;

    cin>>t;

    while(t--)
    {
        n=0;
        ans=0;
        cin>>n;
        for( i = 0; i<n ; i++ )
        {
            cin>>a[i];
        }
        r_min=a[n-1];

        for( i = n-1; i>=0 ; i-- )
        {
            if( r_min<a[i] )
            {
                ans++;
            }
            else
            {
                r_min=a[i];
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
