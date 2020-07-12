#include<bits/stdc++.h>

using namespace std;
typedef long long lli;

int main()
{
    lli t;

    cin>>t;

    while( t-- )
    {
        lli n,x,len;
        cin>>n;

        lli a[n],cnt0=0,cntA=0;
        memset(a,0,sizeof(a));

        for( lli i = 0 ; i <n ; i++ )
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for( lli i = 0 ; i <n ; i++ )
        {
            cnt0++;
            if( cnt0==a[i] )
            {
                cntA++;
                cnt0=0;
            }

//            cout<<cntA<< " ::"<<endl;
        }

        cout<<cntA<<endl;
    }


    return 0;
}
