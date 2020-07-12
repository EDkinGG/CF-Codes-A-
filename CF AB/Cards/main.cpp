#include<bits/stdc++.h>
#define pb          push_back
#define mp          make_pair
#define ff          first
#define ss          second
#define all(x)      x.begin(),x.end()
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >vp;
    int a;
    for( int i = 1 ; i<=n ; i++ )
    {
        cin>>a;
        vp.pb(mp(a,i));
    }

    sort(all(vp));

    for( int i = 0, j=n-1 ; i<n/2 ;i++, j--)
    {
        cout<<vp[i].ss<<" "<<vp[j].ss<<endl;
    }

    return 0;
}
