#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli a,b,cnt=0,px=0;

    cin>>a>>b;

    while(a!=0)
    {
        cnt+=1;

        a-=1;
        px+=1;
        if( px==b )
        {
            a+=1;
            px=0;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
