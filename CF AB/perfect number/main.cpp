#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int SumOfDigits(lli n)
{
    lli sum=0,r;

    while( n )
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }

    return sum;
}

int main()
{
    lli k,i,cont=0,summ;

    cin>>k;

    for( i = 19 ; i<100000000 ; i+=9 )
    {
        summ=SumOfDigits(i);

        if( summ == 10 )
        {
            cont+=1;
        }

        if( cont == k )
        {
            cout<<i<<endl;
            break;
        }
    }


    return 0;
}
