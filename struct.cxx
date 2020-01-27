//this is my first c++ program
#include <iostream>
#include <vector>

using namespace std;

struct Date {
  int day, month, year;
};

int main(){

  Date today;

  today.day   = 30;
  today.month = 1;
  today.year  = 2017;

  cout<<"Today is (dd,mm,yyyy) : "
      <<today.day<<"  "
      <<today.month<<"  "
      <<today.year<<endl;

  return 99;
}