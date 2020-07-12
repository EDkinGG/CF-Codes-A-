#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h,i,cnt=1,cnt1=0,cnt0=0;

    cin>>n;

    string a,s1,s2;

    cin>>a;


    if( n%2!=0 )  //ODD numbers
    {
        cout<<cnt<<endl;
        cout<<a<<endl;

        return 0;
    }





    for( i = 0 ; i<n ; i++ )   // EVEN but only one digit
    {
        if( a[i]=='1' )
        {
            cnt1=cnt1+1;
        }

        else
        {
            cnt0=cnt0+1;
        }
    }

    if( cnt0==0 || cnt1==0 )
    {
        cout<<cnt<<endl;
        cout<<a<<endl;

        return 0;
    }

    else if( cnt1!=cnt0 ) // 0 and 1 are not in same quantity
    {
        cout<<cnt<<endl;
        cout<<a<<endl;

        return 0;
    }



    cnt=2;   // EVEN numbers and random digit available

    h=n/2;


    if( h%2!=0 )
    {
        cout<<cnt<<endl;

        if( h > 1 )
        {
            s1=a.substr(0,h);
            s2=a.substr(h,n);

            cout<<s1<<" "<<s2<<endl;
        }

        else
        {
            s1[0]=a[0];
            s2[0]=a[1];

            cout<<s1[0]<<" "<<s2[0]<<endl;

        }

    }

    else
    {
        cout<<cnt<<endl;
        s1=a.substr(0,h+1);
        s2=a.substr(h+1,n);

        cout<<s1<<" "<<s2<<endl;


    }


    return 0;
}
