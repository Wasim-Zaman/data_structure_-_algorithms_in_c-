#include <iostream>
#define MAX 50
using namespace std;

class LinkedList
{
private:
    int info[MAX],link[MAX],item,N,start,avail;
public:

    LinkedList(int size)
    {
        N=size;
        start = 0;
    }

    void createList()
    {
        for(int m=0;m<N;m++)
        {
            info[m] = rand()/20;
        }
        for(int m=0;m<N;m++)
        {
            if(m==N-1)
            {
                link[m]=-1;
            }
            else
            {
                link[m]=m+1;
            }
        }
        int c = N;
        for(int m=N;m<MAX;m++)
        {
            if(m==MAX-1)
            {
                link[m]=-1;
            }
            else
            {
                link[m]=c;
                c++;
            }
        }
    }
    int sortedSearch()
    {
        int sortedData=100;
        for(int m=0;m<N;m++)
        {
            info[m]=sortedData;
            sortedData = sortedData-10;
        }
        int ptr=start;
        int loc;
        cout<<"Enter the item to be found   :";
        cin>>item;
        while(ptr!=-1)
        {
            if(item < info[ptr])
            {
                ptr=link[ptr];
            }
            else if(item == info[ptr])
            {
                loc=ptr;
                return loc;
            }
            else
            {
                loc = -1;
                return loc;
            }
            loc = -1;
            return loc;
        }
    }
    int unsortedSearch()
    {
        cout<<"\nEnter the item to be searched   :";
        cin>>item;
        int loc;
        int ptr;
        while(ptr!=-1)
        {
            if(item == info[ptr])
            {
                loc = ptr;
                return loc;
            }
            else
                ptr = link[ptr];

                loc = -1;
                return loc;
        }


    }
    void display()
    {
        int ptr = start;
        while(ptr != -1)
        {
            cout<<info[ptr]<<"  ";
            ptr = link[ptr];
        }
    }
};
int main()
{
    LinkedList ll(10);
    ll.createList();
    ll.display();

    int loc = ll.unsortedSearch();
    if(loc==-1)
    {
        cout<<"Item not found\n";
    }
    else
    {
        cout<<"Item found at "<<loc<<" location"<<endl;
    }
    loc = ll.sortedSearch();
    if(loc==-1)
    {
        cout<<"Item not found\n";
    }
    else
    {
        cout<<"Item found at "<<loc<<" location"<<endl;
    }
    return 0;
}
