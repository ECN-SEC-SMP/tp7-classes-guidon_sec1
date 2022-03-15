#ifndef forme_h
#define forme_h
#include "point.h"
#include <iostream>
using namespace std;

class forme {
private:
  

//protected:
    
public:
    point centre;
    // accesseurs en lecture


    // accesseurs en écriture



    // méthodes


    

    // constructeurs
    forme(point p);
    

    // destructeur


    // surcharges
    void operator +=(const point& p1);
    friend ostream& operator<<(ostream& s,const forme& f1);

};

#endif /* forme_h */