#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x=0,y=0,mid=0;



    cin>>n;

    char r[n+10],s[n+10];

    cin>>s;

    if( n%2==0 )
    {
        mid=(n/2)-1;

        r[mid]=s[0];

        x=mid;
        y=mid;

        for( i = 1 ; i<n ; i++ )
        {


            if( i%2 !=0 )
            {
                x=x+1;

                r[x]=s[i];

            }

            else
            {
                y=y-1;

                r[y]=s[i];
            }

        }



    }
    else
    {
        mid=(n-1)/2;

        r[mid]=s[0];

        x=mid;
        y=mid;

        for( i = 1 ; i<n ; i++ )
        {

            if( i%2 !=0 )
            {
                x=x-1;

                r[x]=s[i];

            }

            else
            {
                y=y+1;

                r[y]=s[i];
            }

        }
    }

    for( i = 0 ; i<n ; i++ )
    {
        cout<<r[i];
    }


    return 0;
}
