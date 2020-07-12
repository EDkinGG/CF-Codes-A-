#include <bits/stdc++.h>

using namespace std;

typedef long long int  lli;


/*void sortVect( vector<pair< lli,lli> >*ap,lli n)
{
    sort(ap->begin(), ap->end());

    cout << "Money\t"
         << "F factor" << endl;

    for (lli i = 0; i < n; i++)
    {
        cout << ap->at(i).first << "\t"
             << ap->at(i).second << endl;
    }
}*/

int main()
{
    lli n,d,i,j,m,f,mxf=0,dif=0;
    cin>>n>>d;

    vector<pair<lli, lli> > vp;

    for ( i = 0; i < n; i++)
    {
        cin>>m>>f;

        vp.push_back(make_pair(f, m));
    }

    //sortVect(&vp,n);

    sort(vp.begin(), vp.end());

    /*cout << "Money\t"
         << "F factor" << endl;

         for (lli i = 0; i < n; i++)
    {
        cout << vp[i].first << "\t"
             << vp[i].second << endl;
    }*/

    mxf=vp[n-1].first;


    for ( i = n-1, j = n-2 ; i >=0, j>=0;)
    {
        dif=abs(vp[j].second-vp[i].second);

        if( dif>=d )
        {
            j--;
        }
        else
        {
            mxf=mxf+vp[j].first;
            if(vp[i].second>vp[j].second)
            {
                i=j;
            }
            j--;
        }
    }

    cout<<mxf<<endl;

    return 0;
}
