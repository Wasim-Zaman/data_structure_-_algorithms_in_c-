#include <iostream>

using namespace std;

void mergeSort(int arr[],int low,int high)
{

    if(high > low)
    {
        // find mid
        int mid = (low + high) / 2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(int arr[],int low,int mid,int high)
{

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
