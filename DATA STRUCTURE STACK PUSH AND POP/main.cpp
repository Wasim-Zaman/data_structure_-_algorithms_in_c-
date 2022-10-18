#include <iostream>

using namespace std;
const int MAXSTK = 10;

class STK
{
    int ITEM;
    int TOP;
    int STACK[MAXSTK];
public:
    STK():TOP(-1) {}
    int push(int i)
    {
        ITEM = i;
        if(TOP == MAXSTK)
        {
            cout<<"OVERFLOW !";
            return NULL;
        }
        STACK[++TOP] = ITEM;
        return ITEM;
    }
    int pop()
    {
        if(TOP==-1)
        {
            cout <<"UNDERFLOW !";
            return NULL;
        }
        ITEM = STACK[TOP--];
        return ITEM;

        //return STACK[TOP--];
    }
    void display()
    {
        for(int i=0;i<=TOP;i++)
        {
            cout<<STACK[i]<<"  ";
        }
    }
};
int main()
{
    STK s1;
    cout<<"The value inserted is "<<s1.push(13)<<endl;
    cout<<"The value inserted is "<<s1.push(23)<<endl;
    cout<<"The value inserted is "<<s1.push(10)<<endl;
    cout<<"The value inserted is "<<s1.push(19)<<endl;
    cout<<"The value inserted is "<<s1.push(6)<<endl;
    cout<<"The value inserted is "<<s1.push(7)<<endl;
    cout<<"The value inserted is "<<s1.push(7)<<endl;
    cout<<"The value inserted is "<<s1.push(8)<<endl;
    cout<<"The value inserted is "<<s1.push(9)<<endl;
    cout<<"The value inserted is "<<s1.push(3)<<endl;

    cout<<"The values inserted are "<<endl;
    s1.display();
    cout<<"\nTHE Value deleted is "<<s1.pop()<<endl;
    cout<<"THE Value deleted is "<<s1.pop()<<endl;
    cout<<"THE Value deleted is "<<s1.pop()<<endl;
    cout<<"THE Value deleted is "<<s1.pop()<<endl;
    cout<<"THE Value deleted is "<<s1.pop()<<endl;

    cout<<"The remaining values in the stack are  ";
    s1.display();
    return 0;
}
