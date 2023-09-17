#include<iostream>
using namespace std;

int power(int x, int n){
    if(n == 0){
        return 1;
    }

    int temp = power(x, n/2);
    if(n%2 == 0)
        return temp*temp;
        else
            return x * temp * temp;    
    }
}

int main(){

    return 0;
}