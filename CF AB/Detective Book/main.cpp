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
    int n,cnt=0,count0=0;
    cin>>n;

    int a[n+10];

    for( int i = 0 ; i < n ;i++ )
    {
        cin>>a[i];

        if( a[i]>count0 )
        {
            count0=a[i];
        }
        if( count0==i+1 )
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
