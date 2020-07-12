#include <bits/stdc++.h>

using namespace std;



int change(int x)
{
    if( x == 0 )
    {
        x=1;
    }

    else
    {
        x=0;
    }

    return x;
}

int main()
{
    int a[3][3];
    int b[3][3];

    for( int i = 0 ; i < 3 ; i++ )
    {
        for( int j = 0 ; j < 3 ; j++ )
        {
            a[i][j]=1;
        }
    }

    for( int i = 0 ; i < 3 ; i++ )
    {
        for( int j = 0 ; j < 3 ; j++ )
        {
            cin>>b[i][j];
        }
    }

    for( int i = 0 ; i < 3 ; i++ )
    {
        for( int j = 0 ; j < 3 ; j++ )
        {


            if( b[i][j]!=0 && b[i][j]%2 != 0 )
            {
                if( i == 0 && j==0 )
                {
                    a[0][0]=change(a[0][0]);
                    a[1][0]=change(a[1][0]);
                    a[0][1]=change(a[0][1]);

                }

                else if( i == 0 && j==1 )
                {
                    a[0][1]=change(a[0][1]);
                    a[0][0]=change(a[0][0]);
                    a[0][2]=change(a[0][2]);
                    a[1][1]=change(a[1][1]);
                }

                else if( i == 0 && j==2 )
                {
                    a[0][2]=change(a[0][2]);
                    a[0][1]=change(a[0][1]);
                    a[1][2]=change(a[1][2]);
                }

                 else if( i == 1 && j==0 )
                {
                    a[1][0]=change(a[1][0]);
                    a[1][1]=change(a[1][1]);
                    a[0][0]=change(a[0][0]);
                    a[2][0]=change(a[2][0]);
                }

                else if( i == 1 && j==1 )
                {
                    a[1][1]=change(a[1][1]);
                    a[1][0]=change(a[1][0]);
                    a[1][2]=change(a[1][2]);
                    a[2][1]=change(a[2][1]);
                    a[0][1]=change(a[0][1]);
                }

                 else if( i == 1 && j==2 )
                {
                    a[1][2]=change(a[1][2]);
                    a[1][1]=change(a[1][1]);
                    a[0][2]=change(a[0][2]);
                    a[2][2]=change(a[2][2]);
                }

                else if( i == 2 && j==0 )
                {
                    a[2][0]=change(a[2][0]);
                    a[2][1]=change(a[2][1]);
                    a[1][0]=change(a[1][0]);
                }
                 else if( i == 2 && j==1 )
                {
                    a[2][1]=change(a[2][1]);
                    a[2][0]=change(a[2][0]);
                    a[2][2]=change(a[2][2]);
                    a[1][1]=change(a[1][1]);
                }

                else if( i == 2 && j==2 )
                {
                    a[2][2]=change(a[2][2]);
                    a[2][1]=change(a[2][1]);
                    a[1][2]=change(a[1][2]);
                }
            }
        }
    }


    for( int i = 0 ; i < 3 ; i++ )
    {
        for( int j = 0 ; j < 3 ; j++ )
        {
            cout<<a[i][j];
        }

        cout<<endl;
    }


    return 0;
}
