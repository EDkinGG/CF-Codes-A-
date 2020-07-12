#include<bits/stdc++.h>

using namespace std;

vector<int>a[1000001];

int main()
{
   int n,m,k,e;

   cin>>n>>m>>k;
   e=n-1;

   for( int i = 0 ; i<m ; i++ )
   {
       int p,q;
       cin>>p>>q;

       a[p].push_back(q);
       a[q].push_back(p);

   }

   if( n-a[1].size()<k )
   {
       cout<<"impossible"<<endl;
   }
   else
   {
       cout<<"possible"<<endl;
   }
    return 0;
}
