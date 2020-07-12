#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cntx=0,rmv=0,temp=0;

    cin>>n;

    string a;

    cin>>a;

    for( i = 0 ; i<n ; i++ )
    {
        if( a[i]=='x' )
        {
            cntx=cntx+1;

            if( cntx>2 )
            {
                rmv=temp+cntx-2; //xxxxooxxxx amon case er jonno temp nite hoise
            }
        }

        else
        {
            cntx=0;
            temp=rmv; //xxxxooxxxx temp ekhane prothom 4 tar moddhe je koyta remove korte hobe oitar man store kore rakhse jate pore aro amon xxx asle rmv baraite pare
        }
    }

    cout<<rmv<<endl;

    return 0;
}
