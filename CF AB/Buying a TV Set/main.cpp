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
typedef long long lli;

using namespace std;

lli gcd(lli n1, lli n2)
{
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}

int main()
{
    lli a,b,x,y,g,cnt1=0,cnt2=0;
    cin>>a>>b>>x>>y;

    g=gcd(x,y);
    x=x/g;
    y=y/g;

    cnt1=a/x;
    cnt2=b/y;

    if( cnt1<cnt2 )
    {
        cout<<cnt1<<endl;
    }
    else
    {
         cout<<cnt2<<endl;
    }

    return 0;
}
