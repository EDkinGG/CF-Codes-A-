#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,s,i,m=9,x,lm;
    vector<int> vp;

    cin>>l>>s;

    lm=l;

    if( (s%9!=0 && s/9==l) || s<l )
    {
        cout<<"-1"<<" "<<"-1"<<endl;
    }
    else
    {
        m=9;
        while(l)
        {

            if( s%m!=l-s/m )
            {
                x=s/m;

                for( i = 0 ; i<x ; i++ )
                {
                    vp.push_back(m);
                    s=s-m;
                }

                l=l-x;

                m--;
            }
            else
            {
                x=s/m;

                for( i = 0 ; i<x-1 ; i++ )
                {
                    vp.push_back(m);
                    s=s-m;
                }

                l=l-(x-1);

                m--;
            }
        }

    }

    for( i = 0 ; i<lm ; i++ )
    {
        cout<<vp[i];
    }
    cout<<" ";

    sort(vp.begin(),vp.end());

    for( i = 0 ; i<lm ; i++ )
    {
        cout<<vp[i];
    }




    return 0;
}
