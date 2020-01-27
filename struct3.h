//this is the header file for
//program of structs
#include <iostream>
#include <vector>

using namespace std;

struct Date {
  int day, month, year; };

struct Exam {
  int room, nStudents;
  struct Date date;
};