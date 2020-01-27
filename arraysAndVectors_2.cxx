
//this is my first c++ program
#include <iostream>
#include <vector>

using namespace std;

int main(){

  std::vector<int> myData(3);

  myData.at(0)=5;
  myData.at(1)=8;
  myData.at(2)=9;

  cout<<"My data is : "<<myData.at(0)<<" "<<myData.at(1)<<" "<<myData.at(2)<<endl;

  std::vector<int> myData(3);

  return 99;
}

