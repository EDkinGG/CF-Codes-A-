#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli a[100005];

int main()
{
    lli n,i,MAX=1,cnt=1;
    cin>>n;

    cin>>a[0];
    for( i = 1 ; i<n ; i++ )
    {
        cin>>a[i];
        if( a[i]>a[i-1] )
        {
            cnt+=1;
            if( cnt > MAX)
            {
                MAX=cnt;
            }
        }
        else
        {
            cnt=1;
        }
    }

    cout<<MAX<<endl;

    return 0;
}
