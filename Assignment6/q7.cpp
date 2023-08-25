#include<iostream>
using namespace std;
class student{
        private:
        int reg_no ;
        int roll_no;
        int standard;
    public:
        student(){}
        student(int a, int b, int c){reg_no=a;roll_no=b;
        standard=c;
        }
        int get_regno(){return reg_no;}
        int get_regno(){return roll_no;}
        int get_regno(){return standard;}
    void display(){cout<<"\n reg_no ="<<reg_no<<"\n roll_no ="<<roll_no<<"\n standard ="<<standard;}

};