#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,ln,cnt=0,mid=0,rst=1;

    string a;

    cin>>a;

    ln=a.size();
    mid=ln/2;

    for( i = 0 ; i<ln ; i++ )
    {
        if( a[i]=='a' )
        {
            cnt=cnt+1;
        }


    }


    if( cnt>mid)
    {
        rst=ln;
        cout<<rst<<endl;
    }
    else
    {
        rst=(cnt*2)-1;
        cout<<rst<<endl;
    }



    return 0;
}
