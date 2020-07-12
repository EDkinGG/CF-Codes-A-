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
    int t;

    cin>>t;

    while( t-- )
    {
        int n,temp,s=0,cnt=0;
        cin>>n;
        temp=n;
        while( temp/10!=0 )
        {
            if( temp%10!=0 )
            {
                s++;
            }
            temp=temp/10;
        }
        cout<<s+1<<endl;

        while( 1 )
        {
            if( n/10==0)
            {
                cout<<(n%10)*pow(10,cnt)<<endl;
                cnt==0;
                break;
            }
            if( n%10==0 )
            {
                cnt++;
                n=n/10;
            }
            else
            {
                cout<<(n%10)*pow(10,cnt)<<" ";
                n=n/10;
                cnt++;
            }
        }

    }


    return 0;
}
