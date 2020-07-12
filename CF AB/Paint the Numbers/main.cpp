#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,cnt=0;

    cin>>n;

    int a[n];

    for( int i = 0; i<n ;i++ )
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for( int i = 0; i<n ;i++ )
    {
        if( a[i]==0 )
        {
            continue;
        }
        for( int j = i+1 ; j<n ; j++)
        {
            if( a[j]%a[i]==0 )
            {
                a[j]=0;
            }
        }

        cnt+=1;
    }

    cout<<cnt<<endl;

    return 0;
}
