#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,i,cnt=0;

    cin>>n;

    char s[25];

    for( i = 0 ; i<n ; i++ )
    {
        cin>>s;

        if( strcmp(s,"Tetrahedron")==0 )
        {
            cnt=cnt+4;
        }

        else if( strcmp(s,"Cube")==0 )
        {
            cnt=cnt+6;
        }
        else if( strcmp(s,"Octahedron")==0 )
        {
            cnt=cnt+8;
        }
        else if( strcmp(s,"Dodecahedron")==0 )
        {
            cnt=cnt+12;
        }
        else
        {
            cnt=cnt+20;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
