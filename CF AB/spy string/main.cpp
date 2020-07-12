#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define mp          make_pair
#define mem(x,i)    memset(x,i,sizeof(x))
#define ff          first
#define ss          second
#define popcount(x) __builtin_popcount(x)
#define all(x)      x.begin(),x.end()
#define Case(t)     for(int ks=1;ks<=t;ks++)
#define fileout     freopen("output.txt","w",stdout)
#define filein      freopen("input.txt","r",stdin)

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int n,m;
        bool ck=0;
        cin>>n>>m;
        string ans,x;
        vector<string>s;
        for( int i = 0 ; i<n ; i++ )
        {
            cin>>x;
            s.pb(x);
        }
        ans=s[0];
        for( int i = 0 ; i<m ; i++ )
        {
            char temp=ans[i];
            for( char j = 'a' ; j<='z' ; j++ )
            {
                if( ans[i]!=j )
                {
                    ck=1;
                    ans[i]=j;
                    for( int k = 0 ; k<n ; k++ )
                    {
                        int ecnt=0;
                        for( int l = 0 ; l < m ; l++ )
                        {
                            if( s[k][l]!=ans[l])
                            {
                                ecnt++;
                            }
                            if( ecnt>1 )
                            {
                                ck=0;
                                break;
                            }
                        }
                        if(ck==0)
                        {
                            break;
                        }
                    }
                }
                if( ck )
                {
                    break;
                }
            }
            if( ck )
            {
                cout<<ans<<endl;
                break;
            }
            ans[i]=temp;
        }
        if( ck == 0)
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}




