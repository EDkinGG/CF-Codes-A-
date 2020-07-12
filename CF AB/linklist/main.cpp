#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int info;
    node *link;
} ;

node *head=NULL,*tmp=NULL;

void creation()
{
    node *ptr=new node();
    int item;
    cin>>item;
    ptr->info=item;
    ptr->link=NULL;
    if(head==NULL)
    {
        head=ptr;
        tmp=ptr;
    }
    else
    {
        tmp->link=ptr;
        tmp=ptr;
    }
}

void traverse()
{
    node *str;
    for( str=head ; ; )
    {
        if( str->link!=NULL )
        {
            cout<<str->info<<endl;
            str=str->link;
        }
        else
        {
            cout<<str->info<<endl;
            break;
        }
    }
}

int main()
{
    int n,i;
    cin>>n;

    for( i = 0 ;i<n ; i++)
    {
        creation;
    }

    traverse();
    return 0;
}
