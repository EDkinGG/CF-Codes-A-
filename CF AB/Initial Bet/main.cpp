#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c1,c2,c3,c4,c5,avg,s;

    cin>>c1>>c2>>c3>>c4>>c5;

    s=c1+c2+c3+c4+c5;


    if( s==0)
    {
        cout<<"-1"<<endl;
    }
    else if( s%5 == 0 )
    {
        avg=s/5;

        cout<<avg<<endl;
    }

    else
    {
        cout<<"-1"<<endl;
    }


    return 0;
}
