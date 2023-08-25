#include<iostream>
using namespace std;
class circle{
    private:
        int radius;
        int area;
        public:
        circle(){radius=0;}
        circle(int a){radius =a;}
        int get_radius(){return radius;}
        int get_area(){return 3.14*(radius*radius);}


};