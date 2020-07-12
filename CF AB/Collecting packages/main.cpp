#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,x,y,j,kr,ku;
    vector<pair<int, int> > vp;
    vector<char> path;

    cin>>t;

    for( i = 0 ; i<t ; i++ )
    {
        int temp=0,tempu=0;


        cin>>n;
        for ( j = 0; j < n; j++ )
        {
            cin>>x>>y;
            vp.push_back(make_pair(x,y));
        }
        sort(vp.begin(), vp.end());

        for ( j = 0; j < n; j++ )
        {
            temp=vp[i].first-temp;
            tempu=vp[i].second-tempu;

            if( tempu>=0 )
            {
                for( kr = 0 ; kr < temp ; kr++ )
                {
                    path.push_back('R');
                }

                for( ku = 0 ; ku < tempu ; ku++ )
                {
                    path.push_back('U');
                }
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }

        cout<<"YES"<<endl;
        kr=0;
        while(path[kr]=='R' || path[kr]=='U')
        {
            cout<<path[kr];
            kr++;

        }

    }

    return 0;

}
