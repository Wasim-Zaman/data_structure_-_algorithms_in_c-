#include <iostream>

using namespace std;

int main()
{
    int N=7;
    int DATA[N];
    int temp;
    cout<<"Enter the elements in the array\n";

    for(int k=0;k<=N-1;k++)
    {
        cin>>DATA[k];
    }
    cout<<endl;
    ///////////////////////////
    for(int k=0;k<=N-1;k++)
    {
        int PTR = 0;
        while(PTR<=N-1)
        {
            if(DATA[PTR]>DATA[PTR+1])
            {
                temp = DATA[PTR];
                DATA[PTR]=DATA[PTR+1];
                DATA[PTR+1]=temp;
            }
            PTR++;
        }
    }
    cout<<endl;
    cout<<"After Bubble Sort......\n\n";

    for(int k=0;k<=N-1;k++)
    {

        cout<<DATA[k]<<" ";
    }
    return 0;
}
