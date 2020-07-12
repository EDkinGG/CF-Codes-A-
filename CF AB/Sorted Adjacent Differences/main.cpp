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
typedef long long lli;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        lli n,mid;
        cin>>n;
        lli a[n];
        if( n%2==0 )
        {
             mid=(n/2)-1;
        }
        else
        {
             mid=n/2;
        }

        for( int i = 0 ; i<n ; i++ )
        {
            cin>>a[i];
        }
        sort(a,a+n);

        lli i=mid,j=mid+1;
        for( int cnt = 0 ; cnt<n ; cnt++ )
        {
            if( cnt%2 == 0 )
            {
                cout<<a[i]<<" ";
                i--;
            }
            else
            {
                cout<<a[j]<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}
