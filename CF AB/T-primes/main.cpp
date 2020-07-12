#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

bool prime[1000001]= {false};

void siv()
{
    prime[1]=true;
    prime[0]=true;
    lli n = 1000000;
    lli sq=sqrt(n);
    for(  lli i = 4 ; i<=n ; i+=2 )
        prime[i]=1;
    for(  lli i = 3 ; i<=sq ; i+=2)
    {
        if( prime[i]==0 )
        {
            for(  lli j=2*i; j<=n ; j+=i )
            {
                prime[j]=1;
            }
        }
    }

}

int main( void )
{
    siv();

    lli n,x,p;

    cin>>n;


    while( n-- )
    {
        cin>>x;
        p=sqrt(x);

        if( prime[p]==false && p*p==x )
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
