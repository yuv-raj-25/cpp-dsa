#include<iostream> 
using namespace std;
int main(){


    int arr[10] = {2,3,4,5,6,7,8};

    cout<<"the address of the arr is "<<arr<<endl;

    cout<<arr[0]<<endl;

    cout<<"the address of the arr is "<<&arr[0]<<endl;

    cout<<*arr<<endl;
    return 0;
}