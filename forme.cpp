#include "forme.h"
#include <iostream>
#include "point.h"
using namespace std;


forme::forme(point p) {
  centre=p;
}

void forme::operator +=(const point& p){
  centre+=p;
}

ostream& operator<<(ostream& s,const forme& f1){
  s <<"Coordo du centre : "<<f1.centre;
  return s; 
}