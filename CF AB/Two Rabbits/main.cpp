#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t,x,y,a,b,ad,d;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>a>>b;
        d=abs(x-y);
        ad=a+b;

        if(d%ad==0)
        {
            cout<<d/ad<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
