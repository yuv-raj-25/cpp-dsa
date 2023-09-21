#include <iostream>
using namespace std;

int main(){

    int* arr = new int[10];

    int one[3] = {1,2,3};
    int two[2] = {3,4};
    int three[4] = {4,5,6,7};

    arr[0] = *one; 
    arr[1] = *two;

    for(int i = 0 ; i < 2; i++)
    {
        
        for(int j = 0; j < 2; j++)
        {
            cout<<arr.j<<" ";
        }
    }

    

  
    return 0;
}