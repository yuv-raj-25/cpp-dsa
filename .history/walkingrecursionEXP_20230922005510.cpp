#include <iostream>
using namespace std;

void reached(int src , int dest){

    cout<<"src->"<<src<<"dest->"<<
    if(src == dest){
        cout<<"destination reached "<<endl;
        return;
    }

    src ++;
    reached(src,dest);
}

int main(){

  int src  = 1;
  int dest = 10;

  reached(src,dest);

    return 0;
}