#include <bits/stdc++.h>

typedef long long int lli;


using namespace std;

int NumDigit(lli n)
{
    lli cont=0;
    while(n)
    {
        cont++;
        n=n/10;
    }
    return cont;
}

int DigitRange(lli n)
{
    lli sum=0;
    sum=ceil(pow(10,n)-1);
    return sum;
}


int main()
{
    lli t,i,A,B,digit,total,r9;
    cin>>t;

    for( i = 1 ; i<=t ; i++ )
    {
        cin>>A>>B;

        digit=NumDigit(B);
        //cout<<digit<<endl;

        r9=DigitRange(digit);

        //cout<<r9<<endl;

        if( B==r9 )
        {
            total=A*digit;
        }
        else                    //if( b<r9)
        {
             total=A*(digit-1);
        }
        cout<<total<<endl;
    }
    return 0;
}
