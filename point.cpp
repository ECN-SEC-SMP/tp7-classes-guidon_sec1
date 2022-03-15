#include "point.h"

point::point(float a, float b) {
    x=0;
    y=b;
}

point::point(){
    point(0,0);
}

point::point(const point& p1) {
    x=p1.x;
    y=p1.y;
}

void point::translater(float a, float b){
    x+=a;
    y+=b;
}

void point::translaterpoint(const point& p1){
    x+=p1.x;
    y+=p1.y;
}