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
    FastIO;
    lli i,j,n,temp;
    cin>>n;
    lli a[n];
    for( i = 0 ; i < n ; i++ )
    {
        cin>>a[i];
    }
    for( i = 0, j = n-1 ; i<n/2 ; i+=2,j-=2 )
    {
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for( i = 0 ; i < n ; i++ )
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    return 0;
}
