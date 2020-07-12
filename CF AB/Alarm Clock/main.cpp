#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        ll a,b,c,d,dr,k;
        cin>>a>>b>>c>>d;

        if( b>=a )
        {
            cout<<b<<endl;
            continue;
        }
        else
        {
            dr=c-d;

            if( dr<=0 )
            {
                cout<<"-1"<<endl;
                continue;
            }
            else
            {
                k=(a-b)/dr;
//                cout<<k<<" K1"<<endl;
                if( (a-b)%dr!=0 )
                {
                    k++;
                }
//                cout<<k<<" K2"<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

                cout<<b+c*k<<endl;
                continue;
            }

        }

    }


    return 0;
}
