#include <iostream>
using namespace std;

#include "point.h"
#include "forme.h"



int main() {
  
  point p1(3,5);
  point p2(8,1);
  
  forme f1(p1);

  f1+=p2;
  cout<<f1;
  }


