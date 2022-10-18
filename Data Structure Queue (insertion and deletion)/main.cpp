#include <iostream>

using namespace std;
const int N=6;
class QUEUE
{
private:
    int FRONT,REAR;
    int Q[N];
public:
    QUEUE()
    {
        FRONT=-1; REAR=-1;
    }
    void Insert(int ITEM)
    {
        if((REAR==N && FRONT ==1) || FRONT == REAR+1)
        {
            cout<<"QUEUE OVERFLOW";
            return;
        }

        if(FRONT==-1 && REAR==-1) //initial step....
        {
            FRONT=0;
            REAR=0;
        }
        else if(FRONT == N)
        {
            //FRONT = N means that all the elements are inserted into the QUEUE for that we have to set REAR = 0 again...
            REAR = 0;
        }
        else
        {
            REAR = REAR+1;
        }
        Q[REAR] = ITEM;
        return;
    }

    int Delete()
    {
        int ITEM;
        if(FRONT == -1)
        {
            cout<<"UNDERFLOW";
            return NULL;
        }

        ITEM = Q[FRONT];
        if(FRONT == REAR)
        {
            FRONT=-1;
            REAR=-1;
        }
        else if(FRONT == N) //if FRONT =N but there still exist element to delete for that sack we will set FRONT = 0 again...
            FRONT = 0;
        else
            FRONT++;
        return ITEM;
    }
    void display()
    {
        for(int i=FRONT;i<=REAR;i++)
        {
            cout<<Q[i]<<" ";
        }
    }
};
int main()
{
    QUEUE q1;
    q1.Insert(13);
    q1.Insert(23);
    q1.Insert(10);
    q1.Insert(19);
    q1.Insert(7);
    q1.display();
    cout<<"\n\n";
    q1.Delete();
    q1.Delete();
    q1.display();
    return 0;
}
