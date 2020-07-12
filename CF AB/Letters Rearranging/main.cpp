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
        int len,i,j,ck=0;
        set<char> s;
        string a;
        map<char,int>mp;

        cin>>a;
        len=a.size();
        for( i = 0 ; i<len ; i++ )
        {
            s.insert(a[i]);
            mp[a[i]]++;
        }

        set<char>::iterator it;

        for( i = 0, j = len-1 ; i<len/2 ; i++,j--)
        {
            if( a[i]!=a[j] )
            {
                ck=-1;
                break;
            }
        }
        if( ck==-1 )
        {
            cout<<a<<endl;
            continue;
        }

        if( s.size()<=1 )
        {
            cout<<"-1"<<endl;
            continue;
        }

        for( it=s.begin() ; it!=s.end(); it++ )
        {
            for( i = 1 ; i<=mp[*it]; i++ )
            {
                cout<<*it;
            }
        }
        cout<<endl;

    }


    return 0;
}
