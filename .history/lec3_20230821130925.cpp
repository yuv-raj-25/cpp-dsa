#include<iostream>
using namespace std;


int main(){

    int a =50000;

    int *p = &a;
    int *q = p+1;

    cout<<(char*)p - (char*)p<<endl;

    return 0;
}