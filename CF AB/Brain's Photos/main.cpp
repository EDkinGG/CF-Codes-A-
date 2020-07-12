#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,m,cntBW=0,cntCL=0;

    cin>>n>>m;

    char p[n][m];

    for( i = 0 ; i<n ; i++ )
    {
        for( j = 0 ; j<m ; j++ )
        {
            cin>>p[i][j];

            if( p[i][j] == 'W' || p[i][j] == 'G' || p[i][j] == 'B')
            {
                cntBW=cntBW+1;
            }

            else if( p[i][j] == 'C' || p[i][j] == 'M' || p[i][j] == 'Y')
            {
                cntCL=cntCL+1;
            }
        }
    }

    if( cntCL == 0 )
    {
        cout<<"#Black&White"<<endl;
    }

    else
    {
         cout<<"#Color"<<endl;
    }

    return 0;
}
