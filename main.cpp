#include <iostream>
using namespace std;

#include "point.h"



int main() {
  
  point p1(3,5);
  point p2(3,1);
  p1+=p2;
  cout << p1;

  }


