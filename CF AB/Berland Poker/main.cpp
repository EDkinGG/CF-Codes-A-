#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        int c,j,p,pc,mj,ans;
        cin>>c>>j>>p;

        if( j==0 )
        {
            cout<<"0"<<endl;
            continue;
        }

        pc=c/p;

        if( pc>=j )
        {
            cout<<j<<endl;
        }
        else
        {
            int a[p];
            memset(a,0,sizeof(a));

//            for( int i = 0; i<p ; i++ )
//            {
//                cout<<a[i]<<endl;
//            }

            a[0]=pc;
            j=j-pc;
//            cout<<j<<" j"<<endl;;

            for( int i = 1 ; j>0 ;j-- )
            {
                a[i]++;
                i++;
                if( i>=p )
                {
                    i=1;
                }
            }

            sort(a,a+p);
//            for( int i = 0 ; i<p ; i++ )
//            {
//                cout<<a[i]<<endl;
//            }
            ans=a[p-1]-a[p-2];

            cout<<ans<<endl;
        }

    }


    return 0;
}
