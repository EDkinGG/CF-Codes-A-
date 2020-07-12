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
typedef long long lli;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        lli n,k,dx,dk,kx;
        cin>>n>>k;
        dx=n-1;
        if( k%dx!=0 )
        {
            dk=k/dx;
            kx=k-dk*dx;
            cout<<n*dk+kx<<endl;
        }
        else
        {
            dk=k/dx;
            cout<<n*dk-1<<endl;

        }
    }


    return 0;
}
