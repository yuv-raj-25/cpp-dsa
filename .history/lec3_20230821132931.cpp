#include<iostream>
using namespace std;


int main(){

    // int a =50000;

    // int *p = &a;
    // int *q = p+1;

    // cout<<(char*)q - (char*)p<<endl;


    int arr[] = {5,1,2,4,56,3,2,2,4};
    int res[INT_MAX];

    for(int i = 0; i < 9; i++){
        res[arr[i]]++;
    }


    for(int i = 0; i < INT_MAX; i++){
        if(res[i] > 0)
            cout<< i<<"-->"<<res[i]<<endl;
    }


   
    return 0;
}