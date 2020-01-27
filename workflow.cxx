//this is my first workflow
#include <iostream>

int main(){

  int p1[2];
  int p2[2];

  p1[0]=2;
  p1[1]=4;

  p2[0]=6;
  p2[1]=1;

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

    int p1distanceSquared = p1[0]*p1[0]+p1[1]*p1[1];

    cout<<"p1 distance squared is : "<<p1distancesquared<<endl;
  }
  else{
    cout<<"p2 is further away - I don't care about this"<<endll
  }

  return 99;
}

