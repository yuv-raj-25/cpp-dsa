#include <iostream>
using namespace std;

int  sumofarr(int *arr,int size){

    if(arr == 0)
    return 0;
    
    if(arr[0] == 1)
    return arr[0];

    int remarr = sumofarr(arr+1 ,size-1);

    int sum = arr[0] + remarr;

    return sum;

}

int main(){

  int arr[5] = {1,2,3,4,5};
  int size =5;

  cout<<sumofarr(arr,size);
    return 0;
}