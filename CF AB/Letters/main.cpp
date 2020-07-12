//Hello Baras ki obostha ?
#include<bits/stdc++.h>

typedef long long int lli;

using namespace std;

int binarysearch( lli arr[],lli l, lli x )//l = kast index , x=search korte hobe jeti,
{
    lli i = 0,mid=0;
    while( l>=i )
    {
        mid=i+(l-i)/2;

        if( x<=arr[mid] && x>arr[mid-1] )
        {
            return mid;
        }
        if( x>arr[mid] )
        {
            i=mid+1;
        }
        else
        {
            l=mid-1;
        }
    }

}

int main()
{
    lli n,m,i,sum=0,domNum=0,RoomNum=0;
    cin>>n>>m;

    lli a[n+100],ad[n+100],b[m+100];

    for( i = 0 ; i<n ; i++ )
    {
        cin>>a[i];
        sum=sum+a[i];
        ad[i]=sum;
    }


    for( i = 0 ; i<m ; i++ )
    {
        cin>>b[i];
    }

   // for( i = 0 ; i<n ; i++ )
   // {
   //     cout<<ad[i]<<endl;
    //}
    //cout<<"BARA"<<endl;

    for( i = 0 ; i<m ; i++ )
    {
        if( b[i]<=ad[0] )
        {
            domNum=1;
            cout<<domNum<<" "<<b[i]<<endl;
        }
        else
        {
            domNum=binarysearch(ad,n-1,b[i]);
            RoomNum=b[i]-ad[domNum-1];

            domNum+=1;
            cout<<domNum<<" "<<RoomNum<<endl;
        }
    }

    return 0;
}
