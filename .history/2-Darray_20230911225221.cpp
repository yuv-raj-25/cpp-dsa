#include<iostream>

using namespace std;
 void printsum(int arr[][3],int i,int j){
         for(int i = 0; i<3; i++){
            int sum = 0;
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    }

int main(){

    // int arr[3][3];

    // for(int i = 0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin >> arr[i][j];
    //     }
    // }
    // for(int i = 0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // 

    int arr[3][3] = {{1,2,3},{1,6,7},{9,8,7}};
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"the sum of the col is:>"<<endl;
    int sum = 0;

    for(int i = 0; i<3; i++){
       
        
    }

    return 0;
}