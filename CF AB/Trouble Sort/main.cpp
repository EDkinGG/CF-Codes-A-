#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define mem(x,i)    memset(x,i,sizeof(x))
typedef long long int lli;

using namespace std;

int main()
{
    FastIO;
    lli t;

    cin>>t;

    while( t-- )
    {
        lli n,i,j,temp,temp2,ck=0;
        bool c0=0,c1=0;
        cin>>n;
        lli a[n],b[n];

        for( i = 0 ; i < n ; i++ )
        {
            cin>>a[i];
        }
        for( i = 0 ; i < n ; i++ )
        {
            cin>>b[i];
            if( b[i]==0 )
            {
                c0=1;
            }
            else
            {
                c1=1;
            }
        }

        if( c0&&c1 )
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            for( i = 0 ; i <n-1 ; i++ )
            {
                if( a[i]>a[i+1])
                {
                    ck=1;
                    break;
                }
            }
            if( ck==1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }

    return 0;
}
