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
        int n,m,i,j,cnt=0;
        cin>>n>>m;
        int row[n],col[m];
        mem(row,0);
        mem(col,0);

        int mat[n][m];
        for( i = 0 ; i<n ; i++ )
        {
            for( j = 0 ; j<m ; j++ )
            {
                cin>>mat[i][j];
                if( mat[i][j] == 1 )
                {
                    row[i]=-1;
                    col[j]=-1;
                }
            }
        }

        for( i = 0 ; i<n ; i++ )
        {
            for( j = 0 ; j<m ; j++ )
            {
                if( mat[i][j] == 0 )
                {
                    if( row[i]!=-1 && col[j]!=-1 )
                    {
                        cnt++;
                        row[i]=-1;
                        col[j]=-1;

                    }
                }
            }
        }

        if( cnt%2==0 )
        {
            cout<<"Vivek"<<endl;
        }
        else
        {
            cout<<"Ashish"<<endl;
        }

    }


    return 0;
}
