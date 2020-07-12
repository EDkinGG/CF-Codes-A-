#include<bits/stdc++.h>

using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define SIZE 1000001

int color[SIZE];
int parent[SIZE];
int dis[SIZE];
vector<int> vec[SIZE];

void bfs( vector<int> vec[SIZE],int ver,int Spoint)
{
    int u;

    for( int i = 0 ; i<=ver ; i++ )
    {
        if( i!=Spoint )
        {
            color[i]=WHITE;
            dis[i]=-1;// Infi
            parent[i]=-1; //NULL
        }

    }

    color[Spoint]=GRAY;
    dis[Spoint]=0;
    parent[Spoint]=-1;//NULL

    queue <int> Q;

    Q.push(Spoint);

    while( !Q.empty() )
    {
        u=Q.front();
//        cout<<vec[u].size()<<" ";

        Q.pop();

        for( int i = 0 ; i<vec[u].size() ; i++ )// vec ke push korsi tai condition e 0 theke suru korsi
        {

            int v=vec[u][i];
//            cout<<v<<endl;

            if( color[v] == WHITE )
            {
                color[v] = GRAY;
                dis[v]  = dis[u]+1;
                parent[v]=u;

                Q.push(v);

            }

        }

        color[u]=BLACK;
    }
}



int main()
{
    int r,c,V=0,Spo,num,End,dx,Ans=0,Dx=0,con;
    vector<int> mike;
    vector<int> mike_val;
    cin>>r>>c;

    string a[r];
    int b[r][c];

    for( int i = 0 ; i <r ; i++ )
    {
        cin>>a[i];
    }

    for( int i = 0,num = 1 ; i <r ; i++ )
    {
        for( int j = 0 ; j<c ; j++ )
        {
            b[i][j]=num;
//            cout<<b[i][j]<<endl;
//            cout<<a[i][j]<<endl;

            if( a[i][j]=='S')
            {
                Spo=b[i][j];
//                cout<<Spo<<" S"<<endl;
           }
            else if( a[i][j]=='E')
            {
                End=b[i][j];
//                cout<<End<<" E"<<endl;
            }
            else if( a[i][j]>='1' && a[i][j]<='9')
            {
                mike.push_back(b[i][j]);
                con=(int)(a[i][j]);
                mike_val.push_back(a[i][j]);
            }
            num++;
        }
    }

    for( int i = 0 ; i <r ; i++ )
    {
        for( int  j= 0 ; j<c ; j++ )
        {
            if( a[i][j]=='T')
            {
                continue;
            }
            else
            {
                if( i+1<r && a[i+1][j]!='T')
                {
                    vec[b[i][j]].push_back(b[i+1][j]);
                }
                if( i-1>=0 && a[i-1][j]!='T' )
                {
                    vec[b[i][j]].push_back(b[i-1][j]);
                }
                if( j+1<c && a[i][j+1]!='T' )
                {
                    vec[b[i][j]].push_back(b[i][j+1]);
                }
                if( j-1>=0 && a[i][j-1]!='T' )
                {
                    vec[b[i][j]].push_back(b[i][j-1]);

                }

                V++;
            }
        }
    }

//    cout<<V<<" "<<Spo<<" "<<End<<endl;
    bfs(vec,V,Spo);
//    cout<<dis[End]<<endl;
    dx=dis[End];

//    memset(color,0,SIZE);
//    memset(parent,0,SIZE);
//    memset(dis,0,SIZE);


    for( int i = 0 ; i<mike.size(); i++ )
    {
        bfs(vec,V,mike[i]);
//        cout<<dis[End]<<endl;
//        cout<<mike_val[i]<<endl;

        if( dis[End]>=0 && dis[End]<=dx )
        {
            Ans=Ans+mike_val[i]-48;
        }

//        memset(color,0,SIZE);
//        memset(parent,0,SIZE);
//        memset(dis,0,SIZE);
    }

    cout<<Ans<<endl;


    return 0;
}
