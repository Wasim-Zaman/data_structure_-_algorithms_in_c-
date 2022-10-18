#include <iostream>

using namespace std;

class Stack
{
    int a[10];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void push(int n)
    {
        if(full())
        {
            cout<<"Overflow !!"<<endl;
            exit(0);
        }
        else
            a[++top]=n;
    }

    int pop()
    {
        if(empty())
        {
            cout<<"Underflow !!"<<endl;
            return(0);
        }
        else
            return a[top--];
    }
    bool full()
    {
        if(top==9)
        {
            return true;
        }
        else
            return false;

    }

    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        for(int m=0;m<=top;m++)
        {
            cout<<a[m]<<"  ";
        }
        cout<<endl;
    }
};
int main()
{
    system("Color 6");
    Stack st;
    int ch,n,temp;
    do
    {
        cout<<endl;
        cout<<"press [0]******************** to exit   "<<endl;
        cout<<"press [1]******************** to push   "<<endl;
        cout<<"press [2]******************** to pop    "<<endl;
        cout<<"press [3]******************** to display"<<endl;
        cout<<"\nEnter your choice   :";
        cin>>ch;
        switch(ch)
        {
        case 0:
            break;
        case 1:
            cout <<"Enter the item to be inserted  :";
            cin>>n;
            st.push(n);
            cout<<"Item inserted"<<endl;
            break;
        case 2:
            temp = st.pop();
            if(temp==0)
            {
                cout<<"No item deleted"<<endl;
                break;
            }
            cout<<"Item "<<temp<<" Deleted"<<endl;
            break;
        case 3:
            st.display();
            break;
        default:
            cout<<"Invalid choice please enter choice from 0--3"<<endl;
        }
    }while(ch!=0);
    return 0;
}
