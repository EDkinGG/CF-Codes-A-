#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin>>t;

    for( i = 0 ; i < t ; i++ )
    {
        int a,n,k,j,cnt,ad=1;

        set<int> s;
        set<int> :: iterator it;


        cin>>n>>k;
        for( j = 0 ; j<n ; j++ )
        {
            cin>>a;
            s.insert(a);
        }

        //case 1

        if( s.size()>k )
        {
            cout<<"-1"<<endl;
            continue;
        }

        //case 2

        if( s.size()==k )
        {
            n= n*k;
            cout<<n<<endl;

            for( cnt = 0, it=s.begin(); cnt<n ; cnt++, it++)
            {
                if( it==s.end() )
                {
                    it=s.begin();
                }
                cout<<*it<<" ";

            }
            cout<<endl;

            continue;
        }

        //case 3

        while( s.size()<k )
        {
            s.insert(ad);
            ad++;
        }

        if( s.size()==k )
        {
            n= n*k;
            cout<<n<<endl;

            for( cnt = 0, it=s.begin(); cnt<n ; cnt++, it++)
            {
                if( it==s.end() )
                {
                    it=s.begin();
                }
                cout<<*it<<" ";

            }
            cout<<endl;

        }

    }
    return 0;
}
