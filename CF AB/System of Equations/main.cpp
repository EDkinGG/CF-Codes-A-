#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,j,mx,cnt=0;
    cin>>n>>m;//a^2+b=n,a+b^2=m

    mx=max(n,m);

    for( i = 0 ; i*i<=n ; i++ )
    {
        for( j = 0 ; j*j<=m ; j++ )
        {
            if( i+j*j>m )
            {
                break;
            }
            if( i*i+j==n && i+j*j==m )
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
