#include <iostream>
using namespace std;

int searching(int arr[], int size , int key){
    if(size == 0)
    return 0;

    if(size == 1)
    return arr[0];

    
}

int main(){

  int arr[5] = {1,4,6,8,9};
  int size =5;
  int key = 6;

  searching(arr,size,key);
    return 0;
}