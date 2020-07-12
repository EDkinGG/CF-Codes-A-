#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,j=0,k;
    cin>>n;
    long long int a[n+10];
    long long int b[n+10];
    vector<long long int> d;

    b[0]=2;

    for( i = 1; i<n+1 ; i++ )
    {
        b[i]=0;

    }

    for( i = 0; i<n ; i++ )
    {
        cin>>a[i];

        if(a[i]>n)
        {
            a[i]=0;
        }
        else if(b[a[i]]==0)
        {
            b[a[i]]+=1;
        }
        else
        {
            a[i]=0;
        }

    }

    for( i = 0; i<n ; i++ )
    {
        if( b[i+1] ==0 )
        {
            d.push_back(i+1);
            j=j+1;
        }

    }

    sort(d.begin(),d.end());

    k=0;

    for( i = 0; i<n ; i++ )
    {
        if(a[i]==0)
        {
            a[i]=d[k];
            k+=1;
        }
    }

    for( i =0 ; i<n ; i++ )
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
