#include <bits/stdc++.h>

using namespace std;

int seris(int x)
{
    int i,sum=0;
    for( i = 1 ; i<=x ; i++)
    {
        sum=sum+i*5;
    }
    return sum;
}

int main()
{
    int n,k,sum;
    cin>>n>>k;

    while(1)
    {
        sum=seris(n)+k;

        if( sum>240 )
        {
            n=n-1;
        }
        else
        {
            break;
        }
    }

    cout<<n<<endl;

    return 0;
}
