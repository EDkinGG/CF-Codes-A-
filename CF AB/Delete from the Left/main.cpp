//jodi eder majhe sese ekta common string baki thake taile eder seser char theke milbe tai amr choto string er sapekkhe sese theke milaisi
//seser char na mille eder mahje common kichu nai

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,ln1,ln2,rst=0,cnt=0;

    string a,b;

    cin>>a;

    cin>>b;

    ln1=a.size();

    ln2=b.size();

    if( a==b)
    {
        rst=0;

        cout<<rst<<endl;

        return 0;
    }

    if( ln2<ln1 )
    {
        for( i = ln1-1, j = ln2-1 ; j>=0 ; i--,j--)
        {
            if( a[i]==b[j] )
            {
                cnt=cnt+1;
            }
            else
            {
                break;
            }
        }
    }

    else
    {
        {
            for( i = ln2-1, j = ln1-1 ; j>=0 ; i--,j--)
            {
                if( a[j]==b[i] )
                {
                    cnt=cnt+1;
                }
                else
                {
                    break;
                }
            }
        }
    }

    rst=ln1+ln2-(cnt*2);

    cout<<rst<<endl;

    return 0;
}
