#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int LA[10]; //array
    int w,m; //counter variables
    int k; //kth element
    int N=0; //total No of elements
    int item = 1323;

    //assigning array
    for(w=0;w<7;++w)
    {
        //cin>>LA[w];
        LA[w]=n;
        n++;
        N++;
    }

    m=N; // assigning value to counter loop
    k=3; //setting kth value in which value to be inserted

    while(m>=k)
    {
        LA[m+1] = LA[m];
        m--;
    }
    LA[k]=item; //inserting element into the kth element

    N=N+1;
    for(w=0;w<N-1;w++)
    {

        cout<<LA[w]<<" ";
    }
    return 0;
}
