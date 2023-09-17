#include<iostream>
#include<map>
using namespace std;


int main(){


    int arr[] = {56,1,20,4,5,3,2,2,4};
    map<int, int> mp;

    for(int i = 0; i < 9; i++){
        mp[arr[i]]++;
    }


    for(auto i : mp){
        cout<<i.first<<"-->"<<i.second<<endl;
    }


   
    return 0;
}