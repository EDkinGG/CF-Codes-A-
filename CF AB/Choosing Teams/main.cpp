#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,rq,m=0,team=0;

    cin>>n>>k;

    rq=5-k;

    int a[n];

    for( i = 0 ; i< n ; i++ )
    {
        cin>>a[i];
    }

    for( i = 0 ; i< n ; i++ )
    {
        if( a[i] <= rq )
        {
            m++;

            if( m==3 )
            {
                team=team+1;
                m=0;
            }
        }
    }

    cout<<team<<endl;

    return 0;
}
