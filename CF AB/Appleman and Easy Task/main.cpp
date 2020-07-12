#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,zero=0,temp=1,nxi,nxj;

    cin>>n;

    char a[n][n];

    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n ; j++ )
        {
            cin>>a[i][j];
        }

    }


    for( i = 0 ; i < n ; i++ )
    {
        for( j = 0 ; j < n ; j++ )
        {
           if( i == 0 && j == 0 )  //0 0
           {
               zero=0;

               if( a[1][0]=='o' )
               {
                   zero++;
               }

               if( a[0][1]=='o' )
               {
                   zero++;
               }

               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }
           }

           else if( i == 0 && j != 0 && j !=n-1 ) // 0 j
           {
               zero=0;

               if( a[1][j]=='o' )
               {
                   zero++;
               }

               nxj=j-1;


               if( a[0][nxj]=='o' )
               {
                   zero++;
               }


               nxj=j+1;


               if( a[0][nxj]=='o' )
               {
                   zero++;
               }

               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }



           }

           else if( i != 0 && j == 0 && i !=n-1 )  //i 0
           {
               zero=0;

               if( a[i][1]=='o' )
               {
                   zero++;
               }

               nxi=i-1;


               if( a[nxi][0]=='o' )
               {
                   zero++;
               }


               nxi=i+1;


               if( a[nxi][0]=='o' )
               {
                   zero++;
               }

               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }

           }
           else if( i == n-1 && j != 0 && j !=n-1 ) // n j
           {
               zero=0;

               nxi=i-1;

               if( a[nxi][j]=='o' )
               {
                   zero++;
               }

               nxj=j-1;

               if( a[i][nxj]=='o' )
               {
                   zero++;
               }


               nxj=j+1;

               if( a[i][nxj]=='o' )
               {
                   zero++;
               }

               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }





           }
           else if( j == n-1 && i != 0 && i !=n-1 )  //i n
           {
               zero=0;

               nxj=j-1;

               if( a[i][nxj]=='o' )
               {
                   zero++;
               }

               nxi=i-1;

               if( a[nxi][j]=='o' )
               {
                   zero++;
               }


               nxi=i+1;

               if( a[nxi][j]=='o' )
               {
                   zero++;
               }


               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }
           }
           else if( i == n-1 && j == n-1 ) // n n
           {
               zero=0;

               nxi=i-1,
               nxj=j-1;

               if( a[nxi][j]=='o' )
               {
                   zero++;
               }

               if( a[i][nxj]=='o' )
               {
                   zero++;
               }

               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }

           }
           else if( i == 0 && j == n-1 ) // 0 n
           {
               zero=0;

               nxj=j-1;

               if( a[1][j]=='o' )
               {
                   zero++;
               }


               if( a[0][nxj]=='o' )
               {
                   zero++;
               }


               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }




           }
           else if( i == n-1 && j == 0  ) // n 0
           {
               zero=0;
               nxi=i-1;

               if( a[i][1]=='o' )
               {
                   zero++;
               }


               if( a[nxi][0]=='o' )
               {
                   zero++;
               }


               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }


           }
           else if( j != n-1 && j != 0 && i !=n-1 && i!=0 ) // i j
           {
               zero=0;

               nxj=j-1;

               if( a[i][nxj]=='o' )
               {
                   zero++;
               }

               nxi=i-1;

               if( a[nxi][j]=='o' )
               {
                   zero++;
               }

                nxj=j+1;

               if( a[i][nxj]=='o' )
               {
                   zero++;
               }


               nxi=i+1;

               if( a[nxi][j]=='o' )
               {
                   zero++;
               }

               if( zero%2!=0 )
               {
                   temp=0;
                   break;
               }


           }
        }

    }


    if( temp != 0 )
    {
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
