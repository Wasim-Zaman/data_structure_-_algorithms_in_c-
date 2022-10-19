#include <iostream>

using namespace std;

class LinkedList
{
private:
    int LOC;
    int info[10],link[10];
    int START,AVAIL;
public:
    LinkedList():START(0),AVAIL(3)
        {

            link[0]=1;
            link[1]=2;
            link[2]=3;
            link[3]=4;
            link[4]=5;
            link[5]=6;
            link[6]=7;
            link[7]=8;
            link[8]=9;
            link[9]=-1;


            info[0]=2;
            info[1]=3;
            info[2]=7;

        }
    int findLoc(int ITEM)
    {
        int ptr;
        ptr=START;
        while(ptr!=-1)
        {
            if(ITEM == info[ptr])
            {
                LOC = ptr;
                return LOC;
            }
            else
            {
                ptr = link[ptr];
            }
            LOC = -1;
            return LOC;
        }
    }
    void insertElement(int ITEM)
    {
        if(AVAIL==-1)
        {
            cout<<"OVERFLOW";
            return;
        }
        int NEW;
        NEW = AVAIL;
        AVAIL = link[AVAIL];

        info[NEW] = ITEM;

        if(findLoc(ITEM)==-1)
        {
            link[NEW] = START;
            START = NEW;
        }
        else
        {
            link[NEW]=link[LOC];
            link[LOC] = NEW;
        }
    }

    void display()
    {
        int count=START;
        while(count!=AVAIL)
        {
            cout<<info[count]<<" ";
            count = link[count];
        }
        cout<<endl;
    }
};
int main()
{
    LinkedList obj;

    int ch;
    do{
    cout<<"\n\n1. insert element\n";
    cout<<"\n\n2. display element\n";
    cout<<"\n\n1. Enter your choice\n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        obj.insertElement(6);
        break;
    case 2:
        obj.display();
        break;
    default:
        break;
    }
    }while(ch!=3);
    return 0;
}
