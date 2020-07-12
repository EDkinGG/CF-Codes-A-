#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli a[100005];

int main()
{
    lli i,n,cost=0,cnt=0,cnt0=0;

    cin>>n;

    for( i = 0 ; i<n ; i++ )
    {
        cin>>a[i];

        if( a[i]<0 )
        {
            cost+=-1-a[i];
            cnt++;
        }
        else if( a[i]>0)
        {
            cost+=abs(a[i]-1);
        }
        else
        {
            cost+=1;
            cnt0++;
        }
    }


    if( cnt%2!=0 && cnt0==0 )
    {
        cost+=2;
    }

    cout<<cost<<endl;

    return 0;
}
