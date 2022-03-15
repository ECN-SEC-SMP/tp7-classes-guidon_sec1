#ifndef point_h
#define point_h

class point {
private:
    float x, y;

//protected:
    
public:

    // accesseurs en lecture
    float getx() { return x; }
    float gety() { return y; }

    // accesseurs en écriture
    void setx(float a) { this->x=a; };
    void sety(float b) { this->x=b; };


    // méthodes
    void translater(float a, float b);
    void translaterpoint(const point& p1);
    

    // constructeurs
    point();
    point(float a, float b);
    point(const point& p1); //recopie
    

    // destructeur

};

#endif /* point_h */