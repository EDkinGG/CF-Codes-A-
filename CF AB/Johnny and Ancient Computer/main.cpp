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
    FastIO;
    int t;

    cin>>t;

    while( t-- )
    {
        lli a,b,cnt=0;
        bool ck=0;
        cin>>a>>b;

        if( a==b )
        {
            cout<<"0"<<endl;
            continue;
        }
        else if( b>a )
        {
            while( b!=a )
            {
                if( a*8<=b )
                {
                    a=a*8;
                    cnt++;
                }
                else if( a*4<=b )
                {
                    a=a*4;
                    cnt++;
                }
                else if( a*2<=b )
                {
                    a=a*2;
                    cnt++;
                }
                else
                {
                    ck=1;
                    break;
                }
            }
        }
        else
        {
            while( b!=a )
            {
                if( a/8>=b && a%8==0 )
                {
                    a=a/8;
                    cnt++;
                }
                else if( a/4>=b && a%4==0 )
                {
                    a=a/4;
                    cnt++;
                }
                else if( a/2>=b && a%2==0 )
                {
                    a=a/2;
                    cnt++;
                }
                else
                {
                    ck=1;
                    break;
                }
            }
        }
        if( ck==1 )
        {
            cout<<"-1"<<endl;
        }
        else
        {
             cout<<cnt<<endl;
        }

    }


    return 0;
}
