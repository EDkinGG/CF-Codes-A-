#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,temp,mx=0,n,c;

    cin>>n >>c;

    int b[n];

    for ( i = 0 ; i < n ; i++ )
    {
        cin>>b[i];
    }


     for ( i = 1 ; i < n ; i++ )
    {
        temp=b[i-1]-b[i]-c;

        if( temp>mx )
        {
            mx=temp;
        }
    }

    cout<<mx<<endl;

    return 0;
}
