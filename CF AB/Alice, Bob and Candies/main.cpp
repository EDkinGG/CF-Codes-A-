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
    int t;

    cin>>t;

    while( t-- )
    {
        int n,cnt,temp=0,mx=0,cnta=0,cntb=0,i,j;
        cin>>n;
        int a[n];

        for( i = 0 ; i<n ; i++  )
        {
            cin>>a[i];
        }

        for( i = -1, j = n,cnt=1; i<n ;  )
        {
            if( cnt%2!=0 )
            {
                i++;
                if( i==j )
                {
                    cnta+=temp;
                    if( temp!=0)
                    {
                        cnt++;
                    }
                    temp=0;
                    break;
                }

                temp=temp+a[i];
                if( temp>mx )
                {
                    mx=temp;
                    cnta+=temp;
                    temp=0;
                    cnt++;
                }

            }
            else
            {
                j--;
                if( i==j )
                {
                    cntb+=temp;
                    if( temp!=0)
                    {
                        cnt++;
                    }
                    temp=0;
                    break;
                }

                temp=temp+a[j];
                if( temp>mx )
                {
                    mx=temp;
                    cntb+=temp;
                    temp=0;
                    cnt++;
                }



            }
        }

        cout<<cnt-1<<" "<<cnta<<" "<<cntb<<endl;
    }


    return 0;
}
