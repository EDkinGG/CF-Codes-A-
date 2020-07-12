#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,y,q,a;
    cin>>n>>m;
    string s[n],t[m];

    for( int i = 0 ; i<n ; i++ )
    {
        cin>>s[i];
    }
    for( int i = 0 ; i<m ; i++ )
    {
        cin>>t[i];
    }

    cin>>q;


    for( int i = 0 ; i<q ; i++ )
    {
        cin>>y;
        a=y%n;
        if( a==0 )
        {
            cout<<s[n-1];
        }
        else
        {
            cout<<s[a-1];
        }


        a=y%m;
        if( a==0 )
        {
            cout<<t[m-1]<<endl;
        }
        else
        {
            cout<<t[a-1]<<endl;
        }
    }

    return 0;
}
