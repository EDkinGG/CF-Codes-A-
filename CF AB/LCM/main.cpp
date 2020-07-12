#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int gcd( lli x,lli y)
{
    if( x==0 )
    {
        return x;
    }

    if( y==0 )
    {
        return y;
    }

    //base condition
    if( x==y )
    {
        return x;
    }

    if( x>y )
    {
        gcd(x-y,y);
    }

    else
    {
        gcd(x,y-x);
    }
}


int main()
{
    lli b,g,lcm,i,t,cnt = 0;

    set<lli> ex;

    cin>>b;

    lli a[100];

    for( i = 1 ; i<100 ; i++ )
    {
        g=gcd(i,b);
        //gcd*lcm=x*y;
        t=b/g;

        ex.insert(t);
    }


   cnt=ex.size();

    cout<<cnt<<endl;

    return 0;
}
