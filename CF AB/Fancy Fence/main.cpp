#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a;

    cin>>t;

    for( int i =0 ; i<t ; i++ )
    {
        cin>>a;

        a=180-a;

        if( 360%a==0 && a!=180 )
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
