#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,a,b,i,df,cnt;;

   cin>>t;

   for( i = 0; i<t ; i++ )
   {
       cnt=0;

       cin>>a>>b;

       if( a==b )
       {
           cout<<"0"<<endl;
           continue;;
       }

       df=abs(a-b);

       if( (df/5) >=1 )
       {
           cnt=cnt+(df/5);

           df=df%5;

           if( df==0 )
           {
               cout<<cnt<<endl;
               continue;
           }
       }

       if( (df/2) >=1 )
       {
           cnt=cnt+(df/2);

           df=df%2;

           if( df==0 )
           {
               cout<<cnt<<endl;
               continue;
           }
       }

       if( (df/1) >=1 )
       {
           cnt=cnt+(df/1);

       }

       cout<<cnt<<endl;

   }
    return 0;
}
