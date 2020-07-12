#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli a[3],i,d;

    for( i = 0 ; i<3 ;i++ )
    {
        cin>>a[i];
    }

    sort(a,a+3);
    d=(a[2]-a[1])+(a[1]-a[0]);

    cout<<d<<endl;

    return 0;
}
