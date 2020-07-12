#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;


int main()
{
    lli n,i,j,cnt;
    cin>>n;

    map< string , int > mp;
    string a[n+100];

    for( i = 0 ; i <n ; i++ )
    {
        cin>>a[i];

        if( mp[a[i]]==NULL )
        {
            mp[a[i]]=1;

            cout<<"OK"<<endl;
        }
        else
        {
            cout<<a[i]<<mp[a[i]]<<endl;
            mp[a[i]]+=1;
        }
    }

    return 0;
}
