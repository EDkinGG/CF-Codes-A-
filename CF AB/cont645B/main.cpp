#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t;

    cin>>t;

    while(t--)
    {
        lli n,x=0,i;
        cin>>n;

        lli a[n];


        for( i = 0 ;  i<n ; i++ )
        {
            cin>>a[i];
        }

        sort(a,a+n);

        for( i = n-1 ;  i>=0 ; i-- )
        {
            if( a[i]<=i+1 )
            {
                cout<<i+2<<endl;

                x=1;

                break;
            }
        }

        if( x==0)
        {
            cout<<"1"<<endl;
        }

    }

    return 0;
}
