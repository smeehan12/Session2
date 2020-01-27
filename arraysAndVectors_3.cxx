//this is my first c++ program
#include <iostream>
#include <vector>

using namespace std;

int main(){

  std::vector<int> myData;

  myData.push_back(5);
  myData.push_back(8);
  myData.push_back(9);

  cout<<"My data is : "<<myData.at(0)<<" "<<myData.at(1)<<" "<<myData.at(2)<<endl;

  std::vector< std::vector<int> > myData2D;

  myData2D.push_back(myData);
  myData2D.push_back(myData);

  cout<<"My 2D data is : "<<myData2D.at(0).at(2)<<" "<<myData2D.at(1).at(1)<<" "<<myData2D.at(0).at(4)<<endl;

  return 99;
}

