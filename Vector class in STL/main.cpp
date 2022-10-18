#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    vector <int> v1;
    vector <string> v2(10); //havig three indexes
    vector <string> v3(5,"Wasim");

    // using push_back() and capacity()
    vector <int> v4;
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.push_back(11);
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.push_back(22);
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.push_back(33);
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.push_back(11);
    cout<<"Current capacity = "<<v4.capacity()<<endl;


    //using pop_back()

    cout<<"After Pop "<<endl;

    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"Current capacity = "<<v4.capacity()<<endl;
    v4.pop_back();
    cout<<"Current capacity = "<<v4.capacity()<<endl;

    //using size()
    cout<<"Total capacity of a vector v4 = "<<v4.capacity()<<endl;
    cout<<"Total elements in vector v4 = "<<v4.size()<<endl;

        //using clear()

        v4.clear();
        cout<<"\n\nTotal elements = "<<v4.size();

        //using at()....

        cout<<"\n\n";
        for(int i=0;i<5;i++)
        {
            v4.push_back(i+10);
        }

        for(int m=0;m<v4.size();m++)
        {
            cout<<"value at index "<<m<<" = "<<v4.at(m)<<"\n";
        }

        //using front() and back().....

        cout<<"\n\n first value of vector v4 is :"<<v4.front()<<endl;
        cout<<" last value of vector v4 is  :"<<v4.back()<<endl;

        //using iterators

        vector <int>:: iterator it = v4.begin();  // it will point first index of v4 vector;
        v4.insert(it+3,13);
        cout<<"\n\n";
        for(int m=0;m<v4.size();m++)
        {
            cout<<"Value at index "<<m<<" = "<<v4.at(m)<<endl;
        }
        getch();
    return 0;
}
