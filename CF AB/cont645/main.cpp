#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,s;
        cin>>n>>m;

        s=n*m;

        if( s%2==0 )
        {
            cout<<s/2<<endl;
        }
        else
        {
            cout<<(s/2)+1<<endl;
        }

    }
    return 0;
}
