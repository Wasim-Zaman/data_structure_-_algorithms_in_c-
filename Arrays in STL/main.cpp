#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> a1 = {11,22,33,44,55};
    cout<<"Value present at index three =  :"<<a1.at(2)<<endl;

    try{
    cout<<a1.at(5);
    }
    catch(std::out_of_range e)
    {
        cout<<"\nIndex out of range "<<endl;
    }

    //using back() and front().....

    cout<<"\nValue at first index =  :"<<a1.front()<<endl;  //front()
    cout<<"\nValue at last index  =  :"<<a1.back()<<endl;   //back()

    //using fill() method

    cout<<"assigning same values to each indexes of the array through fill() \n";
    for(int m=0;m<5;m++)
        cout<<a1.at(m)<<"  ";

    //using swap() method
    cout<<endl<<endl;
    array <int,5> a2 = {10,20,30,40,50};
    a1.swap(a2);

    cout<<"Values of array a1 after swapping "<<endl;
    for(int m=0;m<5;m++)
        cout<<a1.at(m)<<"  ";

        cout<<endl<<endl;
        cout<<"Values of array a2 after swapping "<<endl;
    for(int m=0;m<5;m++)
        cout<<a2.at(m)<<"  ";

        //using size()
        return 0;
}
