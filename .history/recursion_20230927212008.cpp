#include <iostream>
using namespace std;

void saydigit(int n){
  if(n ==0)
  return ;

  int digit = n%10;
  n = n/10;

  cout<
}

int main(){

  int n;
  cin>>n;

  saydigit(n);
    return 0;
}