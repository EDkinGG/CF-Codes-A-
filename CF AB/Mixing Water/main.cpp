#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;
typedef long double ld;

int main()
{
    lli t;

    cin>>t;

    while( t-- )
    {
        lli x,ans;
        ld tb0,tb1,tb2,h,c,t,mid;
        cin>>h>>c>>t;

        mid=(c+h)/2;
        ans=2;
        tb0=abs(mid-t);
//        cout<<tb0<<endl;
        if( -2*t+c+h>=0 )
        {
            cout<<"2"<<endl;
            continue;
        }

        x=ld((h-t)/(2*t-c-h));
        mid=(h*(x+1)+c*x)/(2*x+1);
        tb1=abs(mid-t);
//        cout<<tb1<<endl;

        x=x+1;
        mid=(h*(x+1)+c*x)/(2*x+1);
        tb2=abs(mid-t);
//        cout<<tb2<<endl;
        x=x-1;

        if( tb1<tb0 )
        {
            if( tb1<tb2 )
            {
                ans=2*x+1;
            }
            else
            {
                x=x+1;
                ans=2*x+1;
            }
        }
        else
        {
            if( tb0<tb2 )
            {
                ans=2;
            }
            else
            {
                x=x+1;
                ans=2*x+1;
            }
        }
        if( ans>0 )
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    return 0;
}
