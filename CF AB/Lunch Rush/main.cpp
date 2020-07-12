#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,mx,joy;

    cin>>n >>k;

    int f[n],t[n];

    for( i = 0 ; i < n ; i++ )
    {
        cin>>f[i] >>t[i];

        if( t[i]>k )
        {
            joy=f[i]-(t[i]-k);
        }

        else
        {
            joy=f[i];
        }

        if( i == 0)
        {
            mx=joy;
        }

        if( joy>mx )
        {
            mx=joy;
        }
    }

    cout<<mx<<endl;

    return 0;
}
