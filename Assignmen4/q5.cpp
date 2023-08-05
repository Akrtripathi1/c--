#include<iostream>
using namespace std;
class circle{
    float a;
    public:
    void set_data(int b){a= 3.14*(b*b);}
    void show_data(){cout<<"area of circle"<<a;}

};
int main(){
    circle c1;
    c1.set_data(2);
    c1.show_data();

}