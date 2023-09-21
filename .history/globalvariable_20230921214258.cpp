#include <iostream>
using namespace std;

  void a(int& c){
    cout<<c<<endl;
    b(i);
  }  
  void b(int& c){
    cout<<c<<endl;


  } 
int main(){
    int c =5;

    a(c);

 return 0;
}