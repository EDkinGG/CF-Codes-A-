#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main()
{
    lli n,i,cnt=0,mid,rst,vx=0,sx=0,mx=0;//vx,mx,sx nichi case test 70 e prblm deikha

    cin>>n;
    lli a[n];
    vector<pair<lli,lli>> ap;
    vector<lli>b;

    for( i = 0 ; i<n ; i++)
    {
        cin>>a[i];
        ap.push_back(make_pair(a[i],i+1));
    }
    sort(ap.begin(),ap.end());

    for( i = 0 ; i<n ; i++)
    {
        //cout<<ap[i].first<<endl;
        if( a[i] != ap[i].first )
        {
            b.push_back(ap[i].second);
            cnt++;
            vx=9;
            if( sx>1 )
            {
                mx=1;
                break;
            }

        }
        else if( vx==9 )
        {
            sx+=1;
        }
    }

    if( cnt==0 )
    {
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
        return 0;
    }

    if( mx==1 )
    {
        cout<<"no"<<endl;
        return 0;
    }

    mid=(b[0]+b[cnt-1])/2;

    //cout<<b[0]<<" "<<mid<<" "<<cnt<<endl;

    for( i = 1 ; i<cnt ; i++ )
    {
        //cout<<b[i]<<endl;
        if( b[i]==b[i-1]-1)
        {
            rst=1;
        }
        else if(b[i]==mid-1)
        {
            rst=1;
        }
        else
        {
            rst = 0;
            break;
        }
    }

    if( rst==1 )
    {
        cout<<"yes"<<endl;
        cout<<b[cnt-1]<<" "<<b[0]<<endl;
    }
    else
    {
         cout<<"no"<<endl;
    }

    return 0;
}
