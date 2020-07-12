#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define mp          make_pair
#define mem(x,i)    memset(x,i,sizeof(x))
#define ff          first
#define ss          second
#define all(x)      x.begin(),x.end()
#define fileout     freopen("output.txt","w",stdout)
#define filein      freopen("input.txt","r",stdin)

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int x,n,m;
        bool ck=0;

        cin>>x>>n>>m;
        if( m==0 )
        {
            cout<<"No"<<endl;
            continue;
        }

        m=m*10;

        if( x<=m )
        {
            ck=1;
        }

        for( int i = 0 ; i<=n ; i++ )
        {
            if( x>m )
            {
                x=(x/2)+10;
            }
            else
            {
                ck=1;
                break;
            }
        }

        if( ck )
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }


    return 0;
}
