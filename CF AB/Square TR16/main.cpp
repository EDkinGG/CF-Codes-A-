#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
using namespace std;

int main()
{
    FastIO;
    int t;
    cin>>t;

    while( t-- )
    {
        int a1,b1,a2,b2,mn1,mn2,mx1,mx2;
        cin>>a1>>b1;
        cin>>a2>>b2;

        mn1=min(a1,b1);
        mn2=min(a2,b2);
        mx1=max(a1,b1);
        mx2=max(a2,b2);

        if( mn1+mn2==mx1 && mx1==mx2 )
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
