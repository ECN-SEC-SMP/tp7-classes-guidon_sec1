#include "point.h"
#include <iostream>
using namespace std;


point::point() {
    x=0;
    y=0;
}


point::point(float a, float b) {
    x=a;
    y=b;
}


point::point(const point& p1) {
    x=p1.x;
    y=p1.y;
}


void point::translater(float a, float b){
    x+=a;
    y+=b;
}


void point::translater(const point& p1){
    x+=p1.x;
    y+=p1.y;
}


ostream& operator<<(ostream& s,const point& p1){
  s <<"Abcisse : "<<p1.x<<" et "<<"Ordonnée : "<<p1.y;
  return s;
}

void point::operator +=(const point& p1){
  x+=p1.x;
  y+=p1.y;
}