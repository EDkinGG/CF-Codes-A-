#include <bits/stdc++.h>

using namespace std;
typedef long long lli;

int main()
{
    lli A,B,C,D,x,y,z,mns=0,mxs=0,nx=0,ny=0,nz=0,cnt=0;
    cin>>A>>B>>C>>D;
    nx=B-A+1;
    ny=C-B+1;
    mns=A+B;
    mxs=B+C;

    Dmx=B+C;
    if( Dmx>D)
    {
        Dmx=D;
    }
    if( A+B>Dmx)
    {
        cnt=nx*ny*(Dmx-C+1);
    }

    cout<<cnt<<endl;
    return 0;
}
