#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,m,i,j,ct,k;

    cin>>t;

    for( i = 0 ; i<t ; i++ )
    {
        cin>>n>>m;

        int a[n]={0};
        int uv[n*2+10]={0};

        ct=0;

        for( j = 0 ; j<n ; j++ )
        {
            cin>>a[j];
        }

        if( m<n || n<=2 )
        {
            cout<<"-1"<<endl;

            continue;
        }
        for( j = 0,k = 0 ; j<n ; j++, k=k+2 )
        {
            if( j==n-1 )
            {
                ct=ct+a[j]+a[0];
                uv[k]=j+1;
                uv[k+1]=1;
            }
            else
            {
                ct=ct+a[j]+a[j+1];

                uv[k]=j+1;
                uv[k+1]=j+2;
            }


        }

        cout<<ct<<endl;

        for( k = 0 ; k<n*2 ; k=k+2 )
        {
            cout<<uv[k]<<" "<<uv[k+1]<<endl;
        }


    }

    return 0;
}
