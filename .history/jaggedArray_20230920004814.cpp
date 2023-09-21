#include <iostream>
using namespace std;

int main(){

    int* arr[3];

    arr[0] = new int[2] {1,2};
    arr[1] = new int[3] {1,2,3};
    arr[2] = new int[4] {1,2, 5, 6};


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < (i == 0 ? 4 : i == 1 ? 2 : 3); ++j) {
            std::cout << jaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }



    

  
    return 0;
}