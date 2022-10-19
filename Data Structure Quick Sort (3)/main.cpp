#include <iostream>
#define MAX 100
using namespace std;


class QUICK_SORT
{
private:
    int top,A[MAX],beg,en,lower[MAX],upper[MAX],N,loc;
public:
    QUICK_SORT(int length)
    {
        N=length;
        top=-1;
        beg=-1;
        en=-1;
        loc=-1;
        setList();
    }
    void setList()
    {
        for(int m=0;m<N;m++)
        {
            cout<<"Enter value "<<m+1<<endl;
            cin>>A[m];
        }
        quickSort();
    }
    void quickSort()
    {
        top=-1;
        //push the boundry values of list if it has 2 or more values
        if(N>2)
        {
            top++;
            lower[0]=0;
            upper[0]=N-1;

            while(top!=-1)
            {
                beg=lower[top]; en=upper[top];  top--;
                quick();

                //push the left sublist if it has 2 or more values
                if(beg < loc-1)
                {
                    top++;
                    lower[top]=beg;
                    upper[top]=loc-1;

                }
                if(en > loc+1)
                {
                    top++;
                    lower[top]=loc+1;
                    upper[top]=en;

                }
            }

        }
    }
    void quick()
    {
        int left = beg;
        int right = en;
        loc=beg;

        //scan from right to left
        step2:
            while(A[loc]<=A[right] && loc!=right)
            {
                right--;
            }
            if(loc==right)
            {
                return;
            }
            if(A[loc]>A[right])
            {
                int temp;
                temp = A[loc];
                A[loc]=A[right];
                A[right]=temp;
                loc=right;
                goto step3;
            }

            step3:
                while(A[loc]>=A[left] && loc!=left)
                {
                    left++;
                }
                if(loc==left)
                {
                    return;
                }
                if(A[loc]<A[left])
                {
                    int temp;
                    temp = A[loc];
                    A[loc]=A[right];
                    A[right]=temp;
                    loc=left;
                    goto step2;
                }
    }

    void display()
    {
        cout<<"\n\n\n";
        for(int m=0;m<N;m++)
        {
            cout<<A[m]<<"  ";
        }
        cout<<endl;
    }
};

int main()
{
    QUICK_SORT qs(10);
    qs.display();

    return 0;
}
