#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,l1,l2;

    cin>>n>>m;

    vector<string> a;
    vector<string> b;
    vector<string> r;

    string x,y,z;

    for( i = 0 ; i<m ; i++ )
    {
        cin>>x;
        cin>>y;

        a.push_back(x);
        b.push_back(y);

    }

    for( i = 0 ; i<n ; i++ )
    {
        cin>>z;

        r.push_back(z);
    }

    for( i = 0 ; i<n ; i++ )
    {
        for( j = 0 ; j<m ; j++ )
        {
            if( r[i]==a[j] )
            {
                l1=a[j].size();
                l2=b[j].size();
                if( l1<=l2 )
                {
                    cout<<a[j]<<" ";
                }

                else
                {
                    cout<<b[j]<<" ";
                }
            }
        }
    }



    return 0;
}
