#include <iostream>
using namespace std;


bool binarySearch(int arr[] ,int start , int end , int k){

    if(start>end)
        return false;

    int mid = (start +end)/2;    

    if(arr[mid] == k)
        return true; 

    if(arr[mid]>k)
        binarySearch(arr,0,mid-1,k);        
    if

}

int main(){

  int arr[6] = {1,2,3,4,5,6};

  int size = 6;
  int key = 4;


    return 0;
}