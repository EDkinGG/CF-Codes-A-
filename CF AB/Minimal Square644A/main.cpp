#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int a,b,d;
        cin>>a>>b;

        if( a>=b )
        {
            if( 2*b>=a )
            {
                d=2*b;
                cout<<d*d<<endl;

            }
            else
            {
                d=a;
                cout<<d*d<<endl;
            }
        }
        else
        {
            if( 2*a>=b )
            {
                d=2*a;
                cout<<d*d<<endl;

            }
            else
            {
                d=b;
                cout<<d*d<<endl;
            }
        }
    }


    return 0;
}
