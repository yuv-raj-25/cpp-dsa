#include<iostream>
using namespace std;
int maina(){

    int arr[3][4];
    for(int i = 0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<"give the value ti"
            cin>>arr[i][j];
        }
    }

    cout<<arr;
    return 0;
}