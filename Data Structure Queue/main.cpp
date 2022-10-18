#include <iostream>
#define MAX 100
using namespace std;

class Queue
{
private:
    int Q[MAX];
    int front,rear,item,N;
public:

    Queue(int size)
    {
        rear=-1; front=-1;
        N=size;
    }

    void insert(int n)
    {

        //check whether queue is full or not...
        if(isFull())
        {
            cout <<"Overflow !\n";
            return;
        }

        item = n;

        ///find new value of rear
        if(front == -1)
        {
            front =0;  rear=0;
        }
        else if(rear == N-1)
        {
            rear=0;
        }
        else
        {
            rear++;
        }

        Q[rear] = item;
        system("cls");
        cout<<"Item at the rear inserted"<<endl;
    }

    bool isFull()
    {
        return ((front ==0 && rear == N-1) || front == rear+1);
    }
    bool isEmpty()
    {
        return (front == -1);
    }
    void deleteEl()
    {
        /// check whether the queue is empty or not
        if(isEmpty())
        {
            system("cls");
            cout <<"Underflow !"<<endl;
            return;
        }

        item = Q[front];
        ///find new value for front
        if(front == N-1)
        {
            front = 0;
        }
        else if(front == rear)
        {
            front =-1;
            rear  =-1;
        }
        else
        {
            front++;
        }

        system("cls");
        cout <<"Item from the front deleted"<<endl;
    }

    void display()
    {
        if(isEmpty())
        {
            system("cls");
            cout<<"Sorry queue is empty nothing can be displayed \n";
        }
        else
        {
            system("cls");
            for(int m=front;m<=rear;m++)
            {
                cout <<Q[m]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int ch;
    int n;
    Queue q(10);

    do
    {
        //system("cls");
        cout<<"1 insert"<<endl;
        cout<<"2 delete"<<endl;
        cout<<"3 display"<<endl;
        cout<<"4 Exit"<<endl<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            system("cls");
            cout<<"Enter the value to be inserted   :";
            cin>>n;
            q.insert(n);
            break;
        case 2:
            q.deleteEl();
            break;
        case 3:
            q.display();
            break;
        default:
            system("cls");
            cout<<"Enter correct choice \n";
            break;
        }

    }while(ch!=4);
    system("cls");
    cout<<"Good bye";

    return 0;
}
