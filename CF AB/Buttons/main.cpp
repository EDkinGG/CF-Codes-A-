#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,x,cnt=1;

    cin>>n;

    x=n;

    for( i = 1 ; i<n ; i++ )
    {
        for( j = x ; j>=2 ; j-- )
        {
            cnt=cnt+i;
        }

        cnt=cnt+1;

        x=x-1;
    }



    cout<<cnt<<endl;

    return 0;
}
