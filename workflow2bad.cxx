//this is my first workflow
#include <iostream>

using namespace std;

int main(){

  int x=1;
  int y=2;
  int w=4;

  if( x>y )
    cout<<"x is greater than y"<<endl;

  if( y==3 || y==w){
    cout<<"y is equal to 3 or w, I don't know which"<<endl;
    if( y==3 )
      cout<<"got it, y is 3"<<endl;
    else
      cout<<"y must be w, or I wouldn't be here"<<endl;

    int z=6;
    cout<<"z value : "<<z<<endl;
  }



  if( !( w > (x+y) ) )
    cout<<"w is not greater than the sum of x and y"<<endl;

  if( y=3 )
    cout<<"This statement was true"<<endl;

  if( x<y && w>x*y )
    cout<<"Will this print?"<<endl;

  return 99;
}

