#include <iostream>

using namespace std;


class INSERT
{
    int AVAIL,START;
    int LOC;
    int PTR;
    int NEW;
    int INFO[8]={2,3,5,7,8};
    string LINK[8]={1,2,3,4,0};
    int AVIL_INFO[3];
    string AVAIL_LINK[3]={6,7,0};

public:
    INSERT()
    {
        START = 0;
    }
    void insert()
    {
        if(AVAIL = 0)
        {
            cout<<"OVERFLOW";
            return;
        }
        NEW = AVAIL;
        AVAIL = LINK[AVAIL];
    }
    int Search(int ITEM)
    {
        int START=0;
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
};
int main()
{

    return 0;
}
