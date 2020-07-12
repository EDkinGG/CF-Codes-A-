#include<bits/stdc++.h>
#define FastIO      ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0)
#define pb          push_back
#define mp          make_pair
#define mem(x,i)    memset(x,i,sizeof(x))
#define ff          first
#define ss          second
#define all(x)      x.begin(),x.end()
#define fileout     freopen("output.txt","w",stdout)
#define filein      freopen("input.txt","r",stdin)

using namespace std;

int main()
{
    FastIO;
    int n,i,temp=0,mx;
    bool ckl=0,ckr=0,bk=0;
    cin>>n;
    mx=n;
    int a[n+100];
    for( i = 0 ;  i < n ; i++ )
    {
        cin>>a[i];

        if( bk==0 )
        {
            if( a[i]==mx )
            {
                bk=1;
                temp=a[i];
            }
            else if( a[i]<temp )
            {
                ckl=1;
                temp=a[i];
            }
            else
            {
                temp=a[i];
            }
        }
        else
        {
            if( a[i]>temp )
            {
                ckr=1;
                temp=a[i];
            }
            else
            {
                temp=a[i];
            }
        }
    }


    if( ckr==0 && ckl==0 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
