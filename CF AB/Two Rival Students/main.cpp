#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,x,a,b,i,mx=0,rst=0;

    cin>>t;

    for( i = 0 ; i<t ; i++ )
    {
        cin>>n>>x>>a>>b;

        mx=n-1;

        rst=abs(a-b)+x;

        if( rst>mx )
        {
            cout<<mx<<endl;
        }
        else
        {
            cout<<rst<<endl;
        }
    }
    return 0;
}
