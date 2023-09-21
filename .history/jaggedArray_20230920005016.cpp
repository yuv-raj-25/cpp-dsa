// C++ Program to implement Jagged Array
// 1st way: static arrays
#include <iostream>
using namespace std;

int main()
{
	
	int row1[] = { 1, 2, 3, 4 };
	int row2[] = { 5, 6 };
	int row3[] = { 7, 8, 9 };

	int* jagged[] = { row1, row2, row3 };

	int sizes[] = { 4, 2, 3 };

	cout << "elements in matrix form as follow" << endl;
	for (int i = 0; i < 3; i++) {

		int* ptr = jagged[i];

		for (int j = 0; j < sizes[i]; j++) {

			cout << *(ptr + j) << " ";
			// *ptr have base address
			// adding j means access jth
			// element for particular(ith) row
		}
		cout << endl;
	}

	return 0;
}
