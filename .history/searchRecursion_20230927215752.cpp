#include <iostream>
using namespace std;

bool searching(int arr[], int size , int k){
    if(size == 0)
    return false;

    if(arr[0] == k){
        return true;
    } 
    else{
        int remaingpart = searching(arr+1,size-1,k);
        int 
    }
}

int main(){

  int arr[5] = {1,4,6,8,9};
  int size =5;
  int key = 6;

  searching(arr,size,key);
    return 0;
}