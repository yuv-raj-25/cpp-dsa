#include <iostream>
using namespace std;

int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int count_weird_numbers(int N, int K) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (i % K != 0 && sum_of_digits(i) % K == 0) {
            count++;
        }
    }
    return count;
}
/*

a string str of size n is said to be perfect string only if there is no pairof indices[i,j] such that 1 <= i <= j <= n and str[i] = 1 and str[j] = 0. You are given a bonary sting, you need to print mininmum number of operations to make ita perfect string. input format is the first line conatins N(size of string and second tline string S
*/
int main() {
    int N, K;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the value of K: ";
    cin >> K;
    int weird_count = count_weird_numbers(N, K);
    cout << "Count of weird numbers from 1 to " << N << " divisible by " << K << " is: " << weird_count << endl;
    return 0;
}
