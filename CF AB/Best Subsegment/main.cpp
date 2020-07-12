#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,mx = 0,mlen=0,cnt=0;
    cin>>l;
    int a[l];
    for( int i = 0; i<l ; i++ )
    {
        cin>>a[i];
        if( a[i]>mx )
        {
            mx=a[i];
        }
    }
     for( int i = 0; i<l ; i++ )
    {
        if( mx==a[i] )
        {
            cnt+=1;
            if( cnt>mlen )
            {
                mlen=cnt;
            }
        }

        else
        {
            cnt = 0;
        }
    }

    cout<<mlen<<endl;
    return 0;

}
