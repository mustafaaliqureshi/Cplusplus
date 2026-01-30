#include <iostream>
#include <strings>
using namespace std;
class cars{
    private: 
     string name, model, colour;
     int speed, distance;
    public: 
    cars(string n, string m, string c, int s, int d): {name(n), model(m), colour(c), speed(s), distance(d)}
    float time(){ float t = distance/speed; return t;}
    ~cars(){}

};