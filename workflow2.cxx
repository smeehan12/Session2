//Description : This takes two points and will analyze point 1
//if it is further from the origin.  It will then tell you which
//origin it is located in and the area that is made by the rectangle
//with one corner at (x,y)=(0,0) and the other at (x,y)=(p1x,p1y)

#include <iostream>

using namespace std;

int main(){

  int p1[2];
  int p2[2];

  //initialization of the points p1 and p2
  p1[0]=2;
  p1[1]=4;

  p2[0]=6;
  p2[1]=1;

  cout<<"Initial points : "<<endl
      <<"p1 : x="<<p1[0]<<"  y="<<p1[1]<<endl
      <<"p2 : x="<<p2[0]<<"  y="<<p2[1]<<endl<<endl;

  if( p1[0]*p1[0]+p1[1]*p1[1] > p2[0]*p2[0]+p2[1]*p2[1] ){
    cout<<"p1 is further from the origin than p2"<<endl;

    if( p1[0]>0 && p1[1]>0 )
      cout<<"p1 is in quadrant 1"<<endl;
    else if( p1[0]>0 && p1[1]<0 )
      cout<<"p1 is in quadrant 2"<<endl;
    else if( p1[0]<0 && p2[1]>0 )
      cout<<"p1 is in quadrant 3"<<endl;
    else
      cout<<"p1 is in quadrant 4"<<endl;

    int areaWithOrigin = p1[0]*p1[1];

    cout<<"p1 distance squared is : "<<areaWithOrigin<<endl;
  }
  else{
    cout<<"p2 is further away - I don't care about this"<<endl;
  }

  return 99;
}

