#include <bits/stdc++.h>

using namespace std;

int count1(int arr[],int posi,int n)
{
    int cnt=0;

    while( arr[posi]==1 )
    {
        cnt+=1;
        posi++;

        if(posi==n)
        {
            break;
        }
    }

    return cnt;
}

int count2(int arr[],int posi,int n)
{
    int cnt=0;

    while( arr[posi]==2 )
    {
        cnt+=1;
        posi++;

        if(posi==n)
        {
            break;
        }
    }

    return cnt;
}


int main()
{
    int i,n,cnt=0,veclen=0,rst=0;
    cin>>n;

    int t[n+10];

    vector<int>len;

    for( i = 0 ; i<n ; i++ )
    {
        cin>>t[i];
    }

    for( i = 0 ; i<n ; i++ )
    {
        if( t[i]==1 )
        {
            cnt=count1(t,i,n);
            //cout<<cnt<<endl;
            len.push_back(cnt);
            veclen+=1;
            i=i+cnt-1;
        }
        else
        {
            cnt=count2(t,i,n);
            //cout<<cnt<<endl;
            len.push_back(cnt);
            veclen+=1;
            i=i+cnt-1;
        }
    }

    /*for( i = 0 ; i<veclen ; i++ )
    {
        cout<<len[i]<<endl;
    }*/

    for( i = 1 ; i<veclen ; i++ )
    {
        if( len[i-1]<len[i] )
        {
            if( rst<len[i-1] )
            {
                rst=len[i-1];
            }
        }
        else
        {
             if( rst<len[i] )
            {
                rst=len[i];
            }
        }
    }

    rst=2*rst;

    cout<<rst<<endl;

    return 0;
}
