#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[30],b[30],c[1200];
    char temp;
    int i,j,len;

    cin>>a;

    cin>>b;

    cin>>c;

    len=strlen(c);

    for( i = 0 ; i<len ; i++ )
    {

        if( (c[i]<='z' && 'a'<=c[i]) || (c[i]<='Z' && 'A'<=c[i]) )
        {
            if(  'a'<=c[i] && c[i]<='z' )
            {
                for( j = 0 ; j<26 ; j++ )
                {

                    if( c[i]==a[j] && c[i]<='z' )
                    {
                        cout<<b[j];
                        break;
                    }
                }

            }

            else
            {
                for( j = 0 ; j<26 ; j++ )
                {
                    c[i]=tolower(c[i]);



                    if( c[i]==a[j] )
                    {
                        temp=toupper(b[j]);

                        cout<<temp;

                        break;
                    }
                }
            }
        }

        else
        {
            cout<<c[i];
        }

    }

    return 0;
}
