//this is my first c++ program
#include <iostream>
// this is just a little change
using namespace std;

int main(){

  int myData[3];

  myData[0]=5;
  myData[1]=8;
  myData[2]=9;

  cout<<"My data is : "<<myData[0]<<" "<<myData[1]<<" "<<myData[2]<<endl;

  int myData2D[3][5];

  myData2D[1][4]=6;
  myData2D[2][2]=3;

  cout<<"My 2D data is : "<<myData2D[1][4]<<" "<<myData2D[2][2]<<" "<<myData2D[2][60]<<endl;

  return 99;
}

