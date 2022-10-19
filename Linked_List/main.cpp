#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
int info;
struct node *link;
}*start;

struct node* createNode()
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    return temp;
}
int main()
{
    start = createNode();
    struct node* n1 = createNode();
    struct node* n2 = createNode();
    struct node* n3 = createNode();
    struct node* n4 = createNode();

    n1->info = 10;
    n1->link = n2;

    n2->info = 20;
    n2->link = n3;

    n3->info = 30;
    n3->link = n4;

    n4->info = 40;
    n4->link = NULL;

    struct node *temp = start;
    while(temp != NULL)
    {
        cout <<temp->info<<"   ";
        temp = temp->link;
    }
    return 0;
}
