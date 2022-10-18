#include <iostream>

using namespace std;

int Search(int ITEM)
{
    int START=0;
    int INFO[5]={2,3,5,7,8};
    int LINK[5]={1,2,3,4,0};
    int LOC;
    int PTR = START;
    do
    {
        if(ITEM == INFO[PTR])
        {
            LOC = PTR;
            return LOC;
        }
        else
        {
            PTR =LINK[PTR];
        }
    }while(PTR != 0);
    PTR = 0;
}
int main()
{
    int LOC;
    LOC = Search(5);
    if(LOC!=0)
    {
        cout<<"Item found at "<<LOC+1<<"th Location";
    }
    else
    {
        cout<<"Item not found";
    }
    return 0;
}
