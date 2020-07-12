//codeforces 709B
//Interesting drink

#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,q,i,j,cnt=0;
    cin>>n;

    lli a[n];


    for( i = 0 ; i<n ; i++ )
    {
        cin>>a[i];
    }

    cin>>q;
    lli b[q];

    for( i = 0 ; i<q ; i++ )
    {
        cin>>b[i];
    }

    sort(a,a+n);

    for( i = 0; i<q ;i++)
    {
        cnt=upper_bound(a,a+n,b[i])-a;

        cout<<cnt<<endl;
    }

    return 0;
}
