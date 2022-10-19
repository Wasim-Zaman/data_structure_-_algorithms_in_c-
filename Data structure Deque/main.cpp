#include <iostream>

#define MAX 100
using namespace std;

class Deque
{
    int arr[MAX];
    int front,rear,N;
public:

    Deque(int size)
    {
        front = -1;
        rear = 0;
        N=size;
    }

    //operations on Deque

    void insertFront(int num);
    void insertRear(int num);
    void deleteFront();
    void deleteRear();
    bool isFull();
    bool isEmpty();
    int getFront();
    int getRear();


void display()
{
    if(isEmpty())
    {
        cout<<"Underflow ! \n";
        return;
    }
    else
    {
        for(int m=front;m<=rear;m++)
        {
            cout <<arr[m] <<"  ";
        }
        cout<<endl;
    }
}
};

bool Deque::isFull()
{
    return ((front == 0 && rear == N-1)||front == rear+1);
}

bool Deque::isEmpty()
{
    return (front ==-1);
}

//insert into the rear of the deque.....
void Deque::insertRear(int num)
{
    ///check whether deque is full or not
    if(isFull())
    {
        cout <<"Overflow"<<endl;
        return;
    }

    ///if deque is initially empty
    if(front == -1)
    {
        front =0;   rear=0;
    }

    else if(rear == N-1)
    {
        rear = 0;
    }
    else
        rear++;

    arr[rear] = num;
    cout <<"Item at the rear inserted \n";
}

///insert element at the front of the deque

void Deque::insertFront(int num)
{
    ///check whether deque is full or not...
    if(isFull())
    {
        cout<<"Overflow "<<endl;
        return;
    }

    ///if deque is initially empty......
    if(front == -1)
    {
        front =0;
        rear = 0;
    }

    ///if front is at first position
    else if(front == 0)
    {
        front = N-1;
    }
    else
        front --;

    arr[front] = num;
    cout <<"Item at the front inserted \n";
}


///delete item from the front of the deque
void Deque::deleteFront()
{
    ///check whether deque is empty or not
    if(isEmpty())
    {
        cout <<"Underflow \n";
        return;
    }

    ///if deque has only one element
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    ///if it has an element at arr[N] then due to circular array change arr[N] to arr[0]....
    else if(front == N-1)
    {
        front =0;
    }
    else
        front++;

    cout<<"Item from the front deleted \n";
}
///delete element form the rear of the deque...
void Deque::deleteRear()
{
    ///check whether deque is empty or not
    if(isEmpty())
    {
        cout <<"Underflow \n";
        return;
    }

    ///if deque has only one element
    if(front == rear)
    {
        front =-1;   rear=-1;
    }
    ///if deque contain on one element at the rear = 0 then due to circular array we know if arr[0] comes after arr[N]
    ///then arr[N] comes before arr[0] so that is why do it
    else if(rear == 0)
    {
        rear = N-1;
    }
    else
    {
        rear--;
    }

    cout<< "Item from the rear of the deque deleted \n";
}

int Deque::getFront()
{
    if(isEmpty())
    {
        cout <<"Underflow \n";
        return -1;
    }
    return arr[front];
}
int Deque::getRear()
{
    if(isEmpty()||rear<0)
    {
        cout<<"Underflow \n ";
        return -1;
    }
    return arr[rear];
}


int main()
{
    Deque DQ(10);
    int ch;
    int n;
    do
    {
        cout <<"press 1 for insertionFront() operation "<<endl;
        cout <<"press 2 for insertionRear() operation "<<endl;
        cout <<"press 3 for deleteFront() operation "<<endl;
        cout <<"press 4 for deleteRear() operation "<<endl;
        cout <<"press 5 for getRear() operation "<<endl;
        cout <<"press 6 for getFront() operation "<<endl;
        cout <<"press 7 for [EXIT] "<<endl;
        /////////////////////////////////////////////////////
        cout <<"\nEnter your choice   :";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter the value to be inserted at the front   :";
            cin>>n;
            DQ.insertFront(n);
            break;
        case 2:
            cout<<"Enter the value to be inserted at the rear   :";
            cin>>n;
            DQ.insertRear(n);
            break;
        case 3:
            DQ.deleteFront();
            break;
        case 4:
            DQ.deleteRear();
            break;
        case 5:
            if(DQ.getRear()==-1)
            {

            }
            else
                cout<<DQ.getRear()<<endl;
            break;
        case 6:
            if(DQ.getFront()==-1)
            {

            }
            else
                cout<<DQ.getFront()<<endl;
            break;

        case 7:
            DQ.display();

            break;
        default:
            cout<<"Enter valid choice\n";
            break;

        }
    }while(ch!=8);

    return 0;
}
