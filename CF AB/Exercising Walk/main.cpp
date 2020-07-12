#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t,a,b,c,d,x,y,x1,y1,x2,y2,m,n;

    cin>>t;

    while( t-- )
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        m=x;
        n=y;
        //left right
        if( x-a>=x1 )
        {
            m=x-a;

            if( m+b<=x2 )
            {
                m=m+b;
            }
            else
            {
                cout<<"No"<<endl;
                continue;
            }
        }
        else if( x+b<=x2 )
        {
            m=x+b;

            if( m-a>=x1 )
            {
                m=m-a;
            }
            else
            {
                cout<<"No"<<endl;
                continue;
            }
        }

        else
        {
            cout<<"No"<<endl;
            continue;
        }

        //down up

        if( y-c>=y1 )
        {
            n=y-c;

            if( n+d<=y2 )
            {
                n=n+d;
            }
            else
            {
                cout<<"No"<<endl;
                continue;
            }
        }
        else if( y+d<=y2 )
        {
            n=y+d;

            if( n-c>=y1 )
            {
                n=n-c;
            }
            else
            {
                cout<<"No"<<endl;
                continue;
            }
        }

        else
        {
            cout<<"No"<<endl;
            continue;
        }

        cout<<"Yes"<<endl;
    }
    return 0;
}
