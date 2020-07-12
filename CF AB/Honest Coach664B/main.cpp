#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int n,x,MIN;
        vector<int> s;
        cin>>n;
        for( int i = 0 ; i < n ; i++ )
        {
            cin>>x;
            s.push_back(x);
        }

        sort(s.begin(),s.end());

        MIN=s[1]-s[0];

        for( int i = 1 ; i < n-1 ; i++ )
        {
            x=s[i+1]-s[i];
            if( x<MIN )
            {
                MIN=x;
            }
        }

        cout<<MIN<<endl;

    }


    return 0;
}
