//this is my first c++ program
#include <iostream>
#include <vector>

using namespace std;

struct Date {
  int day, month, year; };

struct Exam {
  int room, nStudents;
  struct Date date;
};

int main(){

  Exam myExam;

  myExam.room = 103;
  myExam.nStudents = 13;

  myExam.date.day   = 30;
  myExam.date.month = 1;
  myExam.date.year  = 2017;

  cout<<"Exam details : day = "<<myExam.date.day
      <<"  month = "<<myExam.date.month
      <<"  year = "<<myExam.date.year
      <<"  room = "<<myExam.room
      <<"  nstudents = "<<myExam.nStudents
      <<endl;

  return 99;
}

