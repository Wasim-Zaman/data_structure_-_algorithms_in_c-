#include <iostream>

using namespace std;

int main()
{
    int M=2,N=2,P=2;
    int A[M][N] = { {1,2},
                    {6,7} };
    int B[N][P] = { {3,4},
                    {8,9} };
    int C[M][N];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<M;j++)
        {
            C[i][j] = 0;
            for(int k=0;k<P;k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }


    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
