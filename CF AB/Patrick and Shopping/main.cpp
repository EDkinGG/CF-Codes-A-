#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d1,d2,d3,mn;

    cin>>d1>>d2>>d3;

    int a[3];

    mn=2*d1+2*d2;
    a[0]=d1+d2+d3;
    a[1]=2*d2+2*d3;
    a[2]=2*d1+2*d3;

    for( int i = 0 ;i<3 ; i++ )
    {
        if( a[i]<mn )
        {
            mn=a[i];
        }
    }

    cout<<mn<<endl;

    return 0;
}
