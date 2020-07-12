#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli q,i,c,m,x,cnt,a[3],mn;
    cin>>q;

    for( i = 0 ; i<q ; i++ )
    {
        cin>>c>>m>>x;
        cnt=0;

        if( x>=c && x>=m )
        {
            mn=min(c,m);
            cnt=mn;
        }
        else
        {
            x+=abs(c-m);
            mn=min(c,m);

            c=m=mn;
            cnt=min(x,mn);
            c-=cnt;
            m-=cnt;

            cnt+=(c+m)/3;


        }



        cout<<cnt<<endl;
    }

    return 0;
}
