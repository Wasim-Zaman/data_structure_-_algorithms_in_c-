#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int info;
    struct Node *link;
};
struct Node *start = NULL;
struct  Node *prev = NULL;

void insert(int n)
{
    struct Node *nn=(struct Node *)malloc(sizeof(struct Node));
    nn->info=n;

    if(start==NULL)
    {
        nn->link = NULL;
        start= nn;
       // prev= nn;
    }
    else{
        nn->link=NULL;
        prev->link=&nn;
    }

}

void display()
    {
        struct Node *ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            cout<<ptr->info<<"  ";
            ptr=ptr->link;
        }
    }
int main()
{
    insert(13);
    insert(23);
    insert(10);
    insert(19);
    display();
    return 0;
}
