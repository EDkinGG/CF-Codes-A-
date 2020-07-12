#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,x,t=0;

    cin>>n;



    for( i = 1 ; 1 ; i++ )
    {
        for( j = 1 ; j<=i ; j++ )
        {
            t=t+j;
            if( t>=n )
            {
                if( t==n && i==j )
                {
                    x=0;
                }
                else
                {
                    x=1;
                }
                break;
            }

        }
        //cout<<t<<endl;

        if( t>=n )
        {
            break;
        }


    }

    i=i-x;

    cout<<i<<endl;

    return 0;
}
