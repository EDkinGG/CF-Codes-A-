#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,cnt=0,p,j;

    cin>>n;

    long long int x[n+10],h[n+10];



    for( i = 0 ; i<n ; i++ )
    {
        cin>>x[i];
        cin>>h[i];
    }

    if( n==1 )
    {
        cout<<"1"<<endl;

        return 0;
    }


    p=x[0];
    cnt=2;

    for( i = 1 ; i<n-1 ; i++ )
    {
        if( p < (x[i]-h[i]) )
        {
            cnt=cnt+1;

            p=x[i];
        }


        else if( (x[i]+h[i]) < x[i+1]  )
        {
            cnt=cnt+1;

            p=x[i]+h[i];
        }

        else
        {
            p=x[i];
        }

    }

    cout<<cnt<<endl;

    return 0;
}
