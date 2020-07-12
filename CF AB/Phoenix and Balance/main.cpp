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
        lli n,d,cntb=0,a=0,b=0,i;
        cin>>n;

        for( i = n; i>0 ; i-- )
        {
            if( i==n || cntb==n/2 )
            {
                a+=pow(2,i);
            }
            else
            {
                b+=pow(2,i);
                cntb++;
            }
        }
        d=abs(a-b);
        cout<<d<<endl;
    }


    return 0;
}
