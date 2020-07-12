#include<bits/stdc++.h>

using namespace std;



void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str<<endl;
}

int main()
{
    int n,i,l,j,x;

    cin>>n;

    string a;

    for( i = 0 ; i<n ; i++)
    {
        cin>>a;

        l=a.size();

        for( j = 0 ; j<l ; j++ )
        {
            if( a[j]==a[j+1] )
            {
                x=j+1;
               a.erase(a.begin()+j);
               a.erase(a.begin()+x);
               j++;
            }
        }

        sortString(a);


    }


    return 0;
}
