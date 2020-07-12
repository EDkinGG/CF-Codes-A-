#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k,s,b,a,i,rst=0;

    cin>>n>>k;//9 11 n=total move , k last candy num

    for( a = 0,b = n ; a<=n && b>=0 ; a++,b-- )
    {
        s=(a*a+a)/2-b;

        if(s==k)
        {
            rst=b;
            break;
        }
    }

    cout<<rst<<endl;

    return 0;
}
