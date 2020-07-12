#include<bits/stdc++.h>
#define mem(x,i)    memset(x,i,sizeof(x))

using namespace std;
typedef long long int lli;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        string s;
        lli len,cnt1=0,cnt0=0;
        cin>>s;
        len=s.size();
        lli x[len+1],y[len+1],ans=INT_MAX;
        mem(x,0);
        mem(y,0);


        for( int i = 0 ; i<len ; i++ )
        {
            if(s[i]=='0')
            {
                cnt0++;

            }
            else
            {
                cnt1++;
            }
            x[i]=cnt0;
            y[i]=cnt1;
        }

        for( int i = 0 ; i<len ; i++ )
        {

            ans=min(ans,y[i]+(cnt0-x[i]));
            ans=min(ans,x[i]+(cnt1-y[i]));
        }
        cout<<ans<<endl;



    }
    return 0;
}
