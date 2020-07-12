#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,k;
        lli n1,n2,n3,n4;
        cin>>n>>k;

        n1=n/(k+k*k+k*k*k);
        n2=n1*k;
        n3=n2*k;
        n4=n3*k;
        cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<endl;

    }
    return 0;
}
