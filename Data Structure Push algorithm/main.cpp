#include <iostream>

using namespace std;

class STACK
{
    int TOP;
    int stack[10];

public:
    STACK():TOP(-1)
    {

    }
    void PUSH(int item)
    {
        if(TOP == 10)
        {
            cout<<"OVERFLOW";
            return;
        }
        TOP++;
        stack[TOP]=item;
    }
    void display()
    {
        for(int m=0;m<=TOP;m++)
        {
            cout<<stack[m]<<"  ";
        }
    }
};
int main()
{
    STACK s1;
    s1.PUSH(13);
    s1.PUSH(23);
    s1.PUSH(10);
    s1.PUSH(19);
    s1.display();
    return 0;
}
