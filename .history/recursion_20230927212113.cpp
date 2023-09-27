#include <iostream>
using namespace std;

void saydigit(int n string arr[]){
  if(n ==0)
  return ;

  int digit = n%10;
  n = n/10;

  cout<<arr[]<<endl;
}

int main(){

    string arr = {"zero ","one","two","three"}

  int n;
  cin>>n;

  saydigit(n);
    return 0;
}