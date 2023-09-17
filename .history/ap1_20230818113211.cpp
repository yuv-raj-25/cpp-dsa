#include <iostream>
using namespace std;
int find_similar(int *A, int *B, int s, int key)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (A[i] == B[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{

        int A[] = {2, 3, 2};
    int B[] = {2, 3, 5};
    int size = 3, key = 2;
    int ans = find_similar(A, B, size, key);
    cout << " Answer is : " << ans << endl;
    return 0;
}