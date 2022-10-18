#include <iostream>

using namespace std;

int LSEARCH(int DATA[6],int N,int ITEM,int LOC)
{
    DATA[N+1] = ITEM;
    LOC = 0;
    while(DATA[LOC] != ITEM)
    {
        LOC++;
    }
    if(LOC==N+1)
    {
        LOC = 0;
    }
    return LOC;
}
int main()
{
    int LA[6]={3,4,5,6,7};
    int location;
    location = LSEARCH(LA,5,6,0);
    if(location==0)
    {
        cout<<"Search unsuccessful !";
    }
    else
    {
        cout<<"Search Successful ! the item you searched is at "<<location+1<<" Location:";
    }
    return 0;
}
