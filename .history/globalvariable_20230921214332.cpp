#include <iostream>
using namespace std;

  void a(int& c){
    cout<<c<<endl;
    // b(c);
  }  
  void b(int& c){
    cout<<c<<endl;


  } 
int main(){
    int c =5;

    a(c);
    b(c)

 return 0;
}