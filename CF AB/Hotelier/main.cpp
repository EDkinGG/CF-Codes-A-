#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x=0;
    string a="0000000000";//0----9
    cin>>n;

    char b[n+10];

    for( i = 0 ; i < n ; i++ )
    {
        cin>>b[i];

        if( b[i]=='L' )
        {
            for( j = 0 ; j <n ; j++ )
            {
                if( a[j]=='0' )
                {
                    a[j]='1';
                    break;
                }
            }
        }
        else if( b[i]=='R' )
        {
            for( j = 9 ; j>=0 ; j-- )
            {
                if( a[j]=='0' )
                {
                    a[j]='1';
                    break;
                }
            }
        }
        else
        {
            if( b[i]=='0' )
            {
                x=0;
            }
            else if( b[i]=='1' )
            {
                x=1;
            }
            else if( b[i]=='2' )
            {
                x=2;
            }
            else if( b[i]=='3' )
            {
                x=3;
            }
            else if( b[i]=='4' )
            {
                x=4;
            }
            else if( b[i]=='5' )
            {
                x=5;
            }
            else if( b[i]=='6' )
            {
                x=6;
            }
            else if( b[i]=='7' )
            {
                x=7;
            }
            else if( b[i]=='8' )
            {
                x=8;
            }
            else if( b[i]=='9' )
            {
                x=9;
            }

            a[x]='0';//deleting
        }

    }

    cout<<a<<endl;

    return 0;
}
