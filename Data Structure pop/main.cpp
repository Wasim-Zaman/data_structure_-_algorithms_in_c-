#include <iostream>

using namespace std;

const int MAXSTK = 10;
class STK
{
    int ITEM,TOP;
    int STACK[MAXSTK]={1,2,3,4,5,6,7,8,9,10};
public:
    STK():TOP(MAXSTK-1){}

    int pop()
    {
        if(TOP == -1)
        {
            cout<<"UNDERFLOW";
            return 0;
        }
        ITEM = STACK[TOP];

        return STACK[TOP--];
    }
    void display()
    {
        for(int i=0;i<=TOP;i++)
        {
            cout<<STACK[i]<<" ";
        }
    }

};
int main()
{
    STK s1;
    cout<<"\nThe Item to be deleted is "<<s1.pop();
    cout<<"\nThe Item to be deleted is "<<s1.pop();
    cout<<"\nThe Item to be deleted is "<<s1.pop();
    cout<<"\nThe Item to be deleted is "<<s1.pop();
    cout<<"\nThe Item to be deleted is "<<s1.pop();
    cout<<"\nThe Item to be deleted is "<<s1.pop();
    cout<<endl;
    cout<<"The remaining values in the stack is   ";
    s1.display();
    return 0;
}
