#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int x,n,cnt0=0,cnt1=0;
        cin>>n;
        vector<int>even;
        vector<int> odd;

        for( int i =0 ; i<n ; i++ )
        {
            cin>>x;
            if( x%2==0 )
            {
                even.push_back(x);
                cnt0++;
            }
            else
            {
                odd.push_back(x);
                cnt1++;
            }

        }

        if( cnt0%2==0 && cnt1%2==0 )
        {
            cout<<"YES"<<endl;
            continue;
        }

        for( int i = 0 ; i<even.size() ; i++ )
        {

            for( int j = 0 ; j<odd.size(); j++ )
            {
                if( odd[j]==-1 )
                {
                    continue;
                }
                if( abs(even[i]-odd[j])==1 )
                {
                    even[i]=-1;
                    odd[j]=-1;
                    cnt0--;
                    cnt1--;
                }
                if( cnt0%2==0 && cnt1%2==0 )
                {
                    cout<<"YES"<<endl;
                    break;
                }

            }
            if( cnt0%2==0 && cnt1%2==0 )
            {
                break;
            }
        }

        if( cnt0%2!=0 || cnt1%2!=0 )
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
