#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    while(t--)
    {
        lli ans,x1,y1,x2,y2,dx,dy;
        cin>>x1>>y1>>x2>>y2;
        dx=abs(x1-x2);
        dy=abs(y1-y2);

        cout<<dx*dy+1<<endl;
    }
    return 0;
}
