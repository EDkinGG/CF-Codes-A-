#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define mp          make_pair
#define mem(x,i)    memset(x,i,sizeof(x))
#define ff          first
#define ss          second
#define all(x)      x.begin(),x.end()


using namespace std;

int main()
{
    int n,m,i;
    cin>>n>>m;
    map<string,string>mp;
    string ser1,name,ser2[m],config[m];
    for( i = 0 ; i<n ; i++ )
    {
        cin>>name>>ser1;
        ser1=ser1+";";
        mp[ser1]=name;
    }

    for( i = 0 ; i<m ; i++ )
    {
        cin>>config[i]>>ser2[i];

    }

    for( i = 0 ; i<m ; i++ )
    {
        cout<<config[i]<<" "<<ser2[i]<<" #"<<mp[ser2[i]]<<endl;

    }

    return 0;
}
