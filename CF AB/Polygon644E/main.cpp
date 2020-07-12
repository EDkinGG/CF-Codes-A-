#include<bits/stdc++.h>

using namespace std;
#define MAX 100
string a[MAX];

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int n,ck=0;
        cin>>n;

//        int a[n][n];
//        memset(a,0,n*n);

        for( int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }

        for( int i = 0 ; i<n ; i++)
        {
            for( int j =0 ; j<n ; j++ )
            {
                if(a[i][j]=='1')
                {
                    if( (a[i][j+1]=='1' && j+1!=n ) || j+1==n )
                    {

                    }
                    else if( (a[i+1][j]=='1' && i+1!=n) || i+1==n )
                    {

                    }
                    else
                    {
                        ck=1;
                        printf("NO\n");
                        break;
                    }
                }
            }
            if( ck==1 )
            {
                break;
            }

        }

        if( ck==0 )
        {
            printf("YES\n");
        }

    }


    return 0;
}
