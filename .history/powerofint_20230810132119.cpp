#include <iostream>
using name

long long power(long long x, long long n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        long long temp = power(x, n / 2);
        return temp * temp;
    } else {
        long long temp = power(x, (n - 1) / 2);
        return x * temp * temp;
    }
}

int main() {
    long long base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    long long result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
    
    return 0;
}
