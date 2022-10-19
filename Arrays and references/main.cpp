#include <iostream>

using namespace std;

int arr[5] = {10,20,30,40,50};
int& setAndget(int);

int main()
{
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<setAndget(0)<<endl;   //printing the returned value by the setAndget()
    //it means returning arr[0];
    //cout<<arr[0];


    setAndget(4)=200;       //this statement actually means arr[4] = 200;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
int& setAndget(int i)
{
    return arr[i];
}
