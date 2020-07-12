#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    int i,j,cnt=0,nrw=0;

    cin>>r >>c;

    char a[r][c];

    for( i = 0; i<r ; i++ )
    {
        for( j = 0; j<c ; j++ )
        {
            cin>>a[i][j];
        }
    }



    for( i = 0; i<r ; i++ )
    {
        for( j = 0; j<c ; j++ )
        {
            if( a[i][j]=='.')
            {
                if( j==c-1)
                {
                    cnt=cnt+c;
                    nrw++;
                }
            }

            else
            {
               break;
            }
        }
    }



    for( j = 0; j<c ; j++)
    {
        for(i = 0; i<r ; i++ )
        {
            if( a[i][j]=='.')
            {
                if( i==r-1)
                {
                    cnt=cnt+r-nrw;
                }
            }

            else
            {
               break;
            }

        }
    }


    cout<<cnt<<endl;

    return 0;
}
