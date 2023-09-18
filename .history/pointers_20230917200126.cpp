#include<iostream> 
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    cout<<"the address of the num is->"<<&num<<endl;


    int *ptr = &num;

    cout<< ++(*ptr) <<endl;
    cout<< ptr <<endl;

    return 0;
}
