#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(x,i)    memset(x,i,sizeof(x))
#define pb          push_back

using namespace std;

int main()
{
    int n,m,l,r,cnt=0;

    cin>>n>>m;

    int a[m+1];
    mem(a,0);
    a[0]=-1;
    vector<int>vp;

    while( n-- )
    {
        cin>>l>>r;
        for( int i = l ; i<=r ; i++ )
        {
            a[i]=-1;
        }
    }

    for( int i = 0 ; i<m+1 ; i++ )
    {
        if( a[i]==0 )
        {
            cnt++;
            vp.pb(i);
        }
    }

    cout<<cnt<<endl;
    for( int i = 0 ; i<vp.size() ; i++)
    {
        cout<<vp[i]<<" ";
    }
    cout<<endl;

    return 0;
}
