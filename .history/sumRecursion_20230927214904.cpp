#include <iostream>
using namespace std;

int  sumofarr(int *arr,int size){

    if(arr == 0)
    return 0;
    if(arr[0] == 1)
    return 1;

    int remarr = sumofarr(arr+1 ,size-1);

    int sum = 

}

int main(){

  int arr[5] = {1,2,3,4,5};
  int size =5;

  sumofarr(arr,size);
    return 0;
}