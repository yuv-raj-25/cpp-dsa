#include<iostream>
#include<map>
using namespace std;


int main(){

    // int a =50000;

    // int *p = &a;
    // int *q = p+1;

    // cout<<(char*)q - (char*)p<<endl;


    int arr[] = {5,1,2,4,5,3,2,2,4};
    map<int, int> mp;

    for(int i = 0; i < 9; i++){
        mp[arr[i]]++;
    }


    for(auto i : mp){
        cout<<i.first<<"-->"<<i.second
    }


   
    return 0;
}