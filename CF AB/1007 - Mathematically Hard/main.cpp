#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

#define MAX 5000000

lli dp[MAX+2];


int GCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return GCD(a-b, b);
    return GCD(a, b-a);

    return a;
}

void func( )
{
    lli i,j,cnt=0;

    for( i = 1 ; i<=100 ; i++ )
    {
        cnt=0;
        for( j=1 ; j<i; j++)
        {
            if(GCD(i,j)==1)
            {
                cnt++;
            }
        }
        dp[i]=cnt*cnt;
    }
}


int main()
{
    cout<<"Func"<<endl;
    func();
    cout<<"Test"<<endl;
    lli a,b,t,i,j,score;
    cin>>t;

    for( i = 1 ; i<=t ; i++ )
    {
        score=0;
        cin>>a>>b;

        score=dp[b]-dp[a];

        cout<<"Case "<<i<<": "<<score<<endl;
    }
    return 0;
}
