#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define mp          make_pair
#define mem(x,i)    memset(x,i,sizeof(x))
#define ff          first
#define ss          second
#define popcount(x) __builtin_popcount(x)
#define all(x)      x.begin(),x.end()
#define Case(t)     for(int ks=1;ks<=t;ks++)
#define fileout     freopen("output.txt","w",stdout)
#define filein      freopen("input.txt","r",stdin)

using namespace std;
typedef long long lli;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        lli n,k,dx,dk,dn;
        cin>>n>>k;

        if( n<k || (n%2!=0 && k%2==0) )
        {
            cout<<"No"<<endl;
        }
        else
        {

            if( n%k == 0)
            {
                dx=n/k;
                cout<<"Yes"<<endl;
                while( k-- )
                {
                    cout<<dx<<" ";
                }
                cout<<endl;
            }
            else if( n%2 == 0  )
            {
                dx=n/k;
                dk=k-1;
                dn=n-dk*dx;

                if( dx%2!=0 && dn%2==0 )
                {
                    dx=dx-1;
                    dn=n-dk*dx;
                }
                if( dx==0 )
                {
                    cout<<"No"<<endl;
                    continue;
                }
                cout<<"Yes"<<endl;

                while( dk-- )
                {
                    cout<<dx<<" ";
                }
                cout<<dn<<" "<<endl;
            }
            else
            {

                dx=n/k;
                dk=k-1;
                dn=n-dk*dx;

                if( dx%2==0 && dn%2!=0 )
                {
                    dx=dx-1;
                    dn=n-dk*dx;
                }
                cout<<"Yes"<<endl;
                while( dk-- )
                {
                    cout<<dx<<" ";
                }
                cout<<dn<<" "<<endl;

            }
        }
    }


    return 0;
}
