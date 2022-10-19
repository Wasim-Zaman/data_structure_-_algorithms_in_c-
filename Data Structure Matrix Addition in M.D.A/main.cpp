#include <iostream>

using namespace std;

int main()
{
    int M=2,N=2;
    int A[2][2] = {{13,23},
                   {10,19}};
    int B[2][2] = {{10,20},
                   {30,40}};
    int C[2][2];

    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<A[i][j]<<"  ";
        }
        cout<<"          ";
        for(int k=0;k<N;k++)
        {
            cout<<B[i][k]<<"  ";
        }
        cout<<endl;
    }
    cout<<"\n\n\n";

    ////////////////////////////////////////

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

            for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<A[i][j]<<"  ";
        }
        cout<<"          ";
        for(int k=0;k<N;k++)
        {
            cout<<B[i][k]<<"  ";
        }
        cout<<"          ";
        for(int l=0;l<N;l++)
        {
            cout<<C[i][l]<<"  ";
        }
        cout<<endl;
    }


    return 0;
}
