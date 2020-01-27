// assignment operator
#include <iostream>
using namespace std;

int main ()
{
  int a, b;
  a = 10;
  b = 4*a;
  a /= 2;
  b = b%a;

  cout << "a:";
  cout << a;
  cout << " b:";
  cout << b;

  return 0;
}

