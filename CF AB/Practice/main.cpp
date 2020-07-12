#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,val,x,a,b;
    cin>>n;

    vector<int>v;

   for( i = 0 ; i < n ; i++ )
   {
       cin>>val;
       v.push_back(val);
   }

   cin>>x;
   x=x-1;
   v.erase(v.begin()+x);

//   for( i = 0 ; i < v.size() ; i++ )
//   {
//       cout<<v[i]<<" ";
//   }
//   cout<<endl;

   cin>>a>>b;
   a=a-1;
   b=b-1;
   v.erase(v.begin()+a,v.begin()+b);

   cout<<v.size()<<endl;

   for( i = 0 ; i < v.size() ; i++ )
   {
       cout<<v[i]<<" ";
   }

    return 0;
}
