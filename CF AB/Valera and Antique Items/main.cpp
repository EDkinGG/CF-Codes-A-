#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j,i,n,v,k,s[100],seller_no[100],cnt=0;

    cin>>n >>v;

    for( i = 0 ; i < n ; i++ )
    {
        cin>>k;

        for( j = 0 ; j < k ; j++ )
        {
            cin>>s[j];

        }
        for( j = 0 ; j < k ; j++ )
        {
            if( s[j]<v )
            {

                seller_no[cnt]=i+1;

                cnt=cnt+1;

                break;
            }
        }
    }

    cout<<cnt<<endl;

    for( i = 0 ; i < cnt ; i++ )
    {
        cout<<seller_no[i]<<" ";
    }


    return 0;
}
