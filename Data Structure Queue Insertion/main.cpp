#include <iostream>

using namespace std;

class QUEUE
{
    const int N=5;
    int Queue[N];
    int FRONT,REAR;

public:
    Queue()
    {
        FRONT = -1;
        REAR =  -1;
    }
    void insert(int ITEM)
    {
        if((FRONT == 1 && REAR == N) || FRONT == REAR+1)
        {
            cout<<"OVERFLOW";
            return;
        }
        if(FRONT == -1)
        {
            REAR=0;
            FRONT=0;
        }
        else if(REAR==N)
        {
            REAR=0;
        }
        else
        {
            REAR++;
        }
        Queue[REAR] = ITEM;

        return;
    }
};
int main()
{

    return 0;
}
