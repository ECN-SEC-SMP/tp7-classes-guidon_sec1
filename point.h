#ifndef point_h
#define point_h
#include <iostream>
using namespace std;

class point {
private:
    float x;
    float y;

//protected:
    
public:
    // accesseurs en lecture
    float getx() { return x; }
    float gety() { return y; }

    // accesseurs en écriture
    void setx(float a) { this->x=a; };
    void sety(float b) { this->y=b; };


    // méthodes
    void translater(float a, float b);
    void translater(const point& p1);

    

    // constructeurs
    point();
    point(float a, float b);
    point(const point& p1); //recopie
    

    // destructeur

      
    // surcharges
    friend ostream& operator<<(ostream& s,const point& p1);
    void operator +=(const point& p1);
};

#endif /* point_h */