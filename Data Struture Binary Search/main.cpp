#include <iostream>

using namespace std;

int main()
{
    int LB=0,UB=13;
    int Data[UB] = {11,22,44,55,60,65,66,70,77,79,80,85,88};
    int Loc;
    int Beg = LB , End = UB;
    int Mid = (Beg+End)/2;
    int ITEM = 80;
    while(Beg <=End && Data[Mid]!=ITEM)
    {
        if(ITEM<Data[Mid])

            End = Mid-1;
        else
            Beg = Mid + 1;

        Mid = (Beg+End)/2;
    }
    if(Data[Mid]==ITEM)
    {
        Loc=Mid;
        cout<<"Binary Search Sucessful!! \n The item to be searched is at ";
        cout<<Loc+1<<" Location";
    }
    else
    {
        Loc = NULL;
        cout<<"Binary Search Unsucessful....Sorry";
    }

    return 0;
}