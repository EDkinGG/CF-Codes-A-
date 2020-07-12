#include <iostream>

using namespace std;

int main()
{
  int n;
  string s;
  cin>>n;
  cin>>s;

  for( int i = 0 , j = 0 ; i<n ; i+=j )
  {
      cout<<s[i];
      j++;
  }
  cout<<endl;

}
