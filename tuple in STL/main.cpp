#include <iostream>
#include <tuple>
using namespace std;

int main()
{
    tuple <string,string,int,float> t1;
    tuple <string,string,int,float> t2;
    tuple <string,string,int,float> t3;
    tuple <string,string,int,float> t4;

    t1 = make_tuple("Gohar Zaman"," Javid Zaman",990,87.8);
    t2 = make_tuple("Jafar Zaman"," Javid Zaman",990,87.8);
    t3 = make_tuple("Faysal Zaman","Javid Zaman",990,87.8);
    t4 = make_tuple("Wasim Zaman"," Javid Zaman",871,79.12);

    //printing t1 using get() function defined in std namespace
    cout<<get<0>(t1)<<"  ";
    cout<<get<1>(t1)<<"  ";
    cout<<get<2>(t1)<<"  ";
    cout<<get<3>(t1)<<"  ";
    cout<<"\n\n";

    cout<<get<0>(t2)<<"  ";
    cout<<get<1>(t2)<<"  ";
    cout<<get<2>(t2)<<"  ";
    cout<<get<3>(t2)<<"  ";
    cout<<"\n\n";

    cout<<get<0>(t3)<<"  ";
    cout<<get<1>(t3)<<"  ";
    cout<<get<2>(t3)<<"  ";
    cout<<get<3>(t3)<<"  ";
    cout<<"\n\n";

    cout<<get<0>(t4)<<"  ";
    cout<<get<1>(t4)<<"  ";
    cout<<get<2>(t4)<<"  ";
    cout<<get<3>(t4)<<"  ";
    cout<<"\n\n";
    return 0;
}
