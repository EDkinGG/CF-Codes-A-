#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int n,x,cntO=0,cntE=0,d=0;

        cin>>n>>x;

        int a[n+100];

        for( int i = 0 ; i<n ; i++ )
        {
            cin>>a[i];

            if( a[i]%2==0 )
            {
                cntE++;

            }
            else
            {
                cntO++;
            }
        }

//        cout<<"E "<<cntE<<" O "<<cntO<<endl;


        if( x>cntO )
        {
            if( cntO%2!=0)
            {
//                d=x-cntO;

                if( cntO+cntE>=x )
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
            else
            {

                if( cntO!=0 && ( cntE+cntO-1>=x ) )
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
        }
        else
        {
            if( x%2 == 0 )
            {

                if( cntE>=1 )
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"No"<<endl;
                }
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }



    }


    return 0;
}
