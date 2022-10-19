#include <iostream>
#include <conio.h>
using namespace std;

class LinkedList
{
private:

    class node
    {
        public:
        int info;
        node *link;
    };

    node *START=NULL;
public:

    node* createNode()  ///calling this method means creating new node
    {
        node *n;
        n=new node();
        return (n);   /// new node will be created........
    }

    ///insertion at the last.....
    void insertNode(int number)
    {
        node *temp,*t;
        temp=createNode();
        temp->info=number;
        temp->link=NULL; ///as we will join this node at the last that is why its link part contain null...

        ///now how to join this node with the list?
        ///for adding a node into a list there can be two cases
        ///case one START=NULL..... case two  START!=NULL....

        if(START==NULL)   ///if list is empty and we are adding first node in the list then.....
        {
            START=temp;
            //temp=NULL;
        }
        else        ///means there are already nodes in the linked list
        {
            t=START;
            while(t->link!=NULL)
                t=t->link;   ///we have to access the last node so that we can change its link part to add newly created now at the last

            t->link=temp;
        }

    }

    ///deletion of first node....
    void deleteNode()
    {

        node *r;

        ///first we check whether the list is empty or not?
        if(START==NULL)
        {
            cout<<"The list is empty"<<endl;
        }
        else
        {
            r=START;
            START=START->link;
            free(r);
        }

    }

    void deleteRear()
    {
        node *d,*t0,*t1;
        if(START == NULL)
        {
            cout << "List is empty \n";
        }
        else
        {
            t0=START;
            while(t0!=NULL)
                t0=t0->link;

            d=t0;
            t1=START;
            while(t1!=t0)
            {
                t1=t1->link;
            }
            t1->link=NULL;

            t1=NULL;
            t0=NULL;

            cout <<"Node from rear deleted \n";

            free(d);
            free(t0);
            free(t1);

        }
    }

    void displayList()
        {
            node *m=START;
            if(START==NULL)
            {
                cout<<"The list is empty";
                return;
            }
            while(m!=NULL)
            {
                cout<<m->info<<"  ";
                m=m->link;
            }

            cout<<endl;

        }

        node* search(int ITEM)
        {
            node *LOC;   ///for returning location of the item
            node *ptr;  ///counter variable....
            ptr=START;  ///initialization

            while(ptr!=NULL)
            {
                if(ITEM == ptr->info)
                {
                    LOC = ptr;
                    return (LOC);
                }
                else
                ptr=ptr->link;
            }

            LOC=NULL;
            return (LOC);
        }

};
int main()
{
    LinkedList obj;
    int ch;
    int n;

    while(true)
    {

            cout<<"***********[1]       Insert Node       **********"<<endl;
            cout<<"***********[2]       Delete Node       **********"<<endl;
            cout<<"***********[3]   Display Linked List   **********"<<endl;
            cout<<"***********[4]           Exit          **********"<<endl;
            cout<<"***********[5]       Search Item       **********"<<endl;
            cout<<"***********[6]       Clear Screen      **********"<<endl;
            cout<<"***********[7]     Delete From Rear    **********"<<endl;

            cout<<"\nEnter your choice....:";
            cin>>ch;
            switch(ch)
            {
                case 1:
                system("cls");
                cout<<"Enter the value to be stored in a info node";
                cin>>n;
                obj.insertNode(n);
                cout<<"\n\n\n";
                break;
                case 2:
                system("cls");
                obj.deleteNode();
                cout<<"The first node is deleted\n\n\n";
                break;
                case 3:
                    system("cls");
                    obj.displayList();
                    cout<<"\n\n\n";
                    break;
                case 4:
                    system("cls");
                    exit(0);
                    break;
                case 5:
                    int temp;
                    cout<<"Enter the item to be found in the linked list: ";
                    cin>>temp;
                    if(obj.search(temp)==NULL)
                    {
                        cout<<"ITEM not found..........SORRY!!!"<<endl;
                    }
                    else
                    {
                        cout<<"ITEM found at "<<obj.search(temp)<<" location"<<endl;
                    }
                    break;

                case 6:
                    system("cls");
                    break;
                case 7:
                    obj.deleteRear();
                    break;

                default:
                    cout<<"INVALID CHOICE";
            }
    }


    return 0;
}
