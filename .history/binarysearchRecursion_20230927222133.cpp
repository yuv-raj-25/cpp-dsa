#include <iostream>
using namespace std;


void binarySearch(int arr[] ,int start , int end , int k){

    if(start>end)
        return;

    int mid = (start +end)/2;    

    if(arr[mid] == k)
        cout<<"true"; 

    if(arr[mid]>k)
        binarySearch(arr,0,mid-1,k);        
    else
        binarySearch(arr, mid+1,end,k);

}

int main(){

  int arr[6] = {1,2,3,4,5,6};

  int size = 6;
  int key = 4;


  co<<binarySearch(arr, 0, size-1,key)<<endl;


    return 0;
}