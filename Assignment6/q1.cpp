#include<iostream>
using namespace std;
class cuboid{
 private:
   int length;
   int breadth;
   int height;
 public:
    cuboid(){}
    cuboid(int a, int b, int c){
        length=a;
        breadth=b;
        height =c;

    }
    cuboid(int a, int b){length=a;
        breadth=b;
    }



};
int main(){
    cuboid a(10,20);
}