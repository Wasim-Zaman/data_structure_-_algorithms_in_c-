#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int arr[3][3];
    int w,m;
    for(w=0;w<3;w++)
    {
        for(m=0;m<3;m++)
        {
            cout<<"Enter the value at index "<<w<<m<<endl;
            cin>>arr[w][m];
        }
    }
    cout<<"\n\n";
    for(w=0;w<3;w++)
    {
        for(m=0;m<3;m++)
        {
            cout<<"\t"<<arr[w][m]<<"  ";

        }
        cout<<endl<<endl;
    }
    cout<<"\n\nSquaring each element\n\n";
    for(w=0;w<3;w++)
    {
        for(m=0;m<3;m++)
        {
            cout<<"\t"<<arr[w][m]*arr[w][m]<<"  ";

        }
        cout<<endl<<endl;
    }
    float sum=0;
    for(w=0;w<3;w++)
    {
        for(m=0;m<3;m++)
        {
            sum=sum+arr[w][m]*arr[w][m];

        }
        cout<<endl<<endl;
    }
    cout<<"\n\nThe result is equal to\t:"<<sqrt(sum);
    return 0;
}
