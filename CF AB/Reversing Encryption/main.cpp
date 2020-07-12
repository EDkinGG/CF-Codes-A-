#include<bits/stdc++.h>
#define pb          push_back
using namespace std;

int main()
{
    int n,i,j,k;
    char temp;
    vector<int>vp;
    cin>>n;
    for( i = 2; i<=n/2; i++ )
    {
        if( n%i==0 )
        {
            vp.pb(i);
        }
    }
    vp.pb(n);
    string s;
    cin>>s;

    for( i = 0 ; i<vp.size() ; i++ )
    {
        for( j = 0 , k = vp[i]-1 ; j<vp[i]/2 ; j++ , k-- )
        {
            temp=s[j];
            s[j]=s[k];
            s[k]=temp;
        }
    }

    cout<<s<<endl;

    return 0;
}
