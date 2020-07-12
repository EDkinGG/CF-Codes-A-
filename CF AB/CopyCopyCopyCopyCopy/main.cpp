#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,t,a,ans;;

    cin>>t;

    set< lli >st;

    while(t--)
    {
        cin>>n;

        while(n--)
        {
            cin>>a;
            st.insert(a);
        }
        ans=st.size();
        cout<<ans<<endl;
        st.clear();
    }
    return 0;
}
