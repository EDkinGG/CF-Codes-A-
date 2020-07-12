#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;


int main()
{
   lli i,n,ice,dis=0;
   cin>>n>>ice;

   lli b[n+10];
   char a[n+10];

   for( i = 0 ; i<n ; i++)
   {
       cin>>a[i]>>b[i];
   }

   for(i = 0 ; i<n ; i++)
   {
       if(a[i]=='+')
       {
           ice+=b[i];
       }
       else if( a[i]=='-')
       {
           if( b[i]<=ice )
           {
               ice-=b[i];
           }
           else
           {
               dis+=1;
           }
       }
   }

   cout<<ice<<" "<<dis<<endl;

    return 0;
}
