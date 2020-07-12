#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,t=0,team1=0,team2=0;

    cin>>n;

    vector<string> a;
    vector<string> team;

    string x;

    cin>>x;

    a.push_back(x);
    team.push_back(x); //1st team er name

    for( i = 1 ; i<n ; i++ )
    {
        cin>>x;

        a.push_back(x);

    }

    for( i = 0 ; i<n ; i++ )
    {
        if( team[0]==a[i] )
        {
            team1=team1+1;
        }
        else if( t==0)
        {
            team.push_back(a[i]); //2nd team er name . ekbar neyar por r nite hoy na ..
            team2=team2+1;
            t=1;
        }

        else
        {
            team2=team2+1;
        }
    }



    if( team1>team2 )
    {
        cout<<team[0]<<endl;
    }

    else
    {
        cout<<team[1]<<endl;
    }

    return 0;
}
