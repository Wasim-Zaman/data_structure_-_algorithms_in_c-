#include <iostream>

using namespace std;

class Quick_Sort
{
    private:
    int BEG,END,A[10],LOC,TOP,LOWER[10],UPPER[10];
    const int N=10;

    public:

    Quick_Sort()
    {
        BEG=-1; END=-1; LOC=-1; TOP=-1;
    }

    void setList()
    {
        cout<<"Enter ten numbers sequentially\n";
        for(int m=0;m<10;m++)
        {
            cin>>A[m];
        }
    }
    void quickSort()
    {
        //insert boundry values onto stacks if it has more than 1 elements
        if(N>1)
        {
            TOP++;
            LOWER[1]=1; UPPER[1]=9;
        }
        while(TOP!=-1)
        {
            //pop sub-list from stack....
            BEG=LOWER[TOP];
            END=UPPER[TOP];
            TOP--;

            QUICK();

            //push left sub-list onto stack if it has more than 1 elements
            if(BEG < LOC-1)
            {
                TOP++;
                LOWER[TOP]=BEG;
                UPPER[TOP]=LOC-1;
            }

            if(END > LOC+1)
            {
                TOP++;
                LOWER[TOP]=LOC+1;
                UPPER[TOP]=END;
            }
        }


    }

    void QUICK()
    {
        int LEFT,RIGHT;
        LEFT=BEG; RIGHT=END; LOC=BEG;

        //scan the list from right to left.....
        step2:
        while(A[RIGHT] >= A[LOC] && LOC != RIGHT)
        {
            RIGHT--;
        }
        if(LOC==RIGHT)
        {
            return;
        }
        if(A[LOC] > A[RIGHT])
        {
            int temp = A[LOC];
            A[LOC] = A[RIGHT];
            A[RIGHT] = temp;
            LOC=RIGHT;
            goto step3;
        }



        //scanning list form left to right
        step3:
        while(A[LEFT]<=A[LOC] && LOC!=LEFT)
        {
            LEFT++;
        }
        if(LEFT==LOC)
            return;
        if(A[LOC]<A[LEFT])
        {
            int temp= A[LOC];
            A[LOC] = A[LEFT];
            A[LEFT] = temp;
            LOC=LEFT;
            goto step2;
        }

    }


    void Display()
    {
        for(int m=0;m<10;m++)
        {
            cout<<A[m]<<"  ";
        }
    }
};

int main()
{
    Quick_Sort qs;
    qs.setList();
    qs.quickSort();
    qs.QUICK();
    qs.Display();


    return 0;
}
