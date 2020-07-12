#include <bits/stdc++.h>

using namespace std;

int gcd(int x,int y)
{

    int i,g;


    for( i = 1 ; i<=x && i<=y ; i++ )
    {
        if( x%i == 0 && y%i == 0)
        {
            g=i;
        }

    }

    return g;

}


int main()
{
    int a,b,n,cnt;


    cin>>a>>b>>n;

    cnt = 1;

    while(1)
    {

        if( cnt == 1 )
        {
            n=n-gcd(a,n);
            cnt=0;
        }

        else
        {
            n=n-gcd(b,n);
            cnt=1;
        }

        if( n<=0 )
        {
            break;
        }
    }


    cout<<cnt<<endl;

    return 0;
}
