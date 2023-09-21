#include <iostream>
using namespace std;

int main(){

    int* jaggedArray[3]; // This array will hold three different arrays

    // Initialize the inner arrays with different sizes
    jaggedArray[0] = new int[4] {1, 2, 3, 4};
    jaggedArray[1] = new int[2] {5, 6};
    jaggedArray[2] = new int[3] {7, 8, 9};

    // Access and print elements of the jagged array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < (i == 0 ? 4 : i == 1 ? 2 : 3); ++j) {
            std::cout << jaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }


    

  
    return 0;
}