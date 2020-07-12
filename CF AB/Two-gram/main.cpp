#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,mx=0,ix;

    string a,x;

    cin>>n;

    cin>>a;

    vector<string>sub;

    int cnt[n-1];

    for( i = 0 ; i<n-1 ; i++ )
    {

        x=a.substr(i,2);

        sub.push_back(x); // jora gula alada korsi..distinct hoite hobe na
    }


    for( i=0 ; i<n-1 ;i++ )
    {
        cnt[i]=0;

        for( j = 0 ; j<n-1 ;j++ )
        {
            if( sub[i]==sub[j] )  //sobgula jora tader nije k soho kore cnt korsi
            {
                cnt[i]=cnt[i]+1;
            }
        }
    }

    for( i=0 ; i<n-1 ; i++ )
    {
        if( mx<cnt[i] )
        {
            mx=cnt[i];
            ix=i; // sob cheye vesi bar thaka jorar index
        }
    }

    cout<<sub[ix]<<endl;


    return 0;
}
