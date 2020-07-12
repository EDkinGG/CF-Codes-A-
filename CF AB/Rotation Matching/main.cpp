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
    FastIO;
    int n,x,i,j,sta,stb,cou,tsta,tstb,cnt=0,dx,mx=0;
    cin>>n;
    int a[n],b[n];
    map<int,int>mp;

    for( i = 0 ; i<n ; i++ )
    {
        cin>>x;
        a[i]=x;
        mp[x]=i;
    }

    cin>>b[0];
    tsta=mp[b[0]];
    tstb=0;

    for( i = 1 ; i<n ; i++ )
    {
        cin>>b[i];
        if( mp[b[i-1]]+1==n )
        {
            dx=0;
        }
        else if( mp[b[i-1]]+1<0 )
        {
            dx=n-1;
        }
        else
        {
            dx=mp[b[i-1]]+1;
        }
        if( mp[b[i]]==dx )
        {
            cnt++;
            if( mx<cnt )
            {
                mx=cnt;
                sta=tsta;
                stb=tstb;
            }
        }
        else
        {
            cnt=0;
            tsta=mp[b[i]];
            tstb=i;
        }
    }

    cnt=0;
    if( mx == 0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for( cou=0,i=sta,j=stb ; cou < n; cou++,i++,j++ )
    {
        if( i==n )
        {
            i=0;
        }
        if( j==n )
        {
            j=0;
        }

        if( a[i]==b[j])
        {
            cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
