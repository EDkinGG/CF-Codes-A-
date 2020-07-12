#include <bits/stdc++.h>

using namespace std;

int a[1005][2];


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void divi( )
{
    int i,k,j;

    for( i = 1 ; i<1001 ; i++ )
    {
        for( j = 1 ; j<=(a[i][0]/2) ; j++ )
        {
            if( a[i][0]%j==0 )
            {
                a[i][1]+=1;
            }
        }
    }
}

void arrange( )
{
    int i, j;
    for (i = 1; i < 1002-1; i++)
    {
        for (j = 1; j < 1002-i-1; j++)
        {
            if ( a[j][1]>a[j+1][1] || ( (a[j][1]==a[j+1][1])&&(a[j][0]<a[j+1][0]) ) )
            {
                swap(&a[j][0], &a[j+1][0]);
                swap(&a[j][1], &a[j+1][1]);
            }

        }

    }

}

int main()
{
    int i,n,t;
    for( i = 0 ; i<1001 ; i++ )
    {
        a[i][0]=i;
        a[i][1]=0;
    }


    divi();
    arrange();

//    for( i = 1 ; i<=1000 ; i++ )
//    {
//
//        cout<<a[i][0]<<" "<<a[i][1]<<endl;
//    }

    cin>>t;
    for( i = 1 ; i<=t ; i++ )
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<a[n][0]<<endl;
    }
    return 0;
}
