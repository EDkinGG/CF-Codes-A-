#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t,x,y,dif;
    cin>>t;

    while(t--)
    {
        cin>>x>>y;

        dif=x-y;

        if( dif>1 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
