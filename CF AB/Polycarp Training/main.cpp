#include<bits/stdc++.h>

using namespace std;

int a[1000001];

int main()
{
    int n,i,days;

    cin>>n;

    for( i = 0 ; i<n ; i++ )
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for( i = 0 , days = 1 ; i<n ; i++ )
    {
        if( a[i]>=days )
        {
            days++;
        }
    }
    cout<<days-1<<endl;

    return 0;
}
