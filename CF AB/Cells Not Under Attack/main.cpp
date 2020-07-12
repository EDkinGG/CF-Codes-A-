#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,m,i,row,column;

    cin>>n>>m;
    row=n;
    column=n;

    lli r,c;

    set< lli > rm;
    set< lli > cm;


    for( i = 0 ; i < m ; i++ )
    {
        cin>>r>>c;

        rm.insert(r);
        cm.insert(c);

        row=n-rm.size();
        column=n-cm.size();
        cout<<row*column<<endl;

    }

    return 0;
}
