#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while( t-- )
    {
        string s;
        int len,cnt0=0,ck=0,cnttmp=0;
        cin>>s;
        len=s.size();
//        cout<<len<<endl;

        if( s=="1" || s=="0" )
        {
            cout<<"0"<<endl;
        }
        else
        {
            for( int i = 0 ; i<len ; i++ )
            {
                if( s[i]=='1'&& ck==1 )
                {
                    cnt0+=cnttmp;
                    cnttmp=0;
                }
                else if( s[i]=='1' )
                {
                    ck=1;
                    cnttmp=0;
                }
                else if( s[i]=='0' )
                {
                    cnttmp++;
                }
            }

            cout<<cnt0<<endl;
        }
    }


    return 0;
}
