#include<bits/stdc++.h>
#include<math.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,m,i,j,fstd,lstd,cnt=0,c=0;
    cin>>n>>m;
    string a[n+10];
    string rev;
    vector<string> fst;
    vector<string> lst;
    vector<string> els;



    for( i=0 ; i<n ; i++ )
    {
        cin>>a[i];
    }

    for( i=0 ; i<n ; i++ )
    {
        if(a[i]=="-1")
        {
            continue;
        }

        for( j=i+1 ; j<n ; j++ )
        {
            rev=a[i];
            reverse(rev.begin(),rev.end());
            if( rev==a[j])
            {
                fst.push_back(a[i]);
                lst.push_back(a[j]);
                a[i]="-1";
                a[j]="-1";

            }

        }
        rev=a[i];
        reverse(rev.begin(),rev.end());
        if( rev==a[i])
        {
            els.push_back(a[i]);
            c=1;
        }
    }

    fstd=fst.size();
    lstd=lst.size();

    cnt=(fstd*2*m)+(c*m);
    cout<<cnt<<endl;

    for( i=0 ; i<fstd; i++ )
    {
        cout<<fst[i];

    }

    for( i=0 ; i<els.size(); i++ )
    {
        cout<<els[i];
        break;

    }

    for( i=lstd-1 ; i>=0 ; i-- )
    {
        cout<<lst[i];
    }


    return 0;
}
