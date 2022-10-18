#include <iostream>
#define MAX 50
using namespace std;

class LL
{

private:
    int link[MAX],avail,info[MAX],N,start;

public:

    LL()
    {
        N=-1;
        start=-1;
        avail=0;    //avail list is created......

    }

    void creatNode()
    {
        N++;
        cout<<"Enter the value to the node  :";
        cin>>info[N];

        if(start == -1)
        {
            start = N;
        }
        else
        {
            link[N]=-1;
        }

    }
    void display()
    {
        int ptr=start;
        while(ptr!=-1)
    }
};
int main()
{
    return 0;
}
