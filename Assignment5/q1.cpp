#include<iostream>
using namespace std;
class Complex{

        int a,b;
        public:
        void set_data(int j,int k){ a=j; b=k;}
        void show_data( ){
            Complex c;
            
            cout<<"a="<<a<<endl<<"b="<<b;
        }
        Complex add(Complex j){
             Complex k;
            k.a=j.a+a;
            k.b=j.b+b;
            return k;
        }
};
class Complexsub{

        int a,b;
        public:
        void set_data(int j,int k){ a=j; b=k;}
        void show_data( ){
          
            
            cout<<"a="<<a<<endl<<"b="<<b;
        }
        Complexsub add(Complexsub j){
             Complexsub k;
            k.a=a-j.a;
            k.b=a-j.b;
            return k;
        }

    
};
 
class Complexmul{

        int a,b;
        public:
        void set_data(int j,int k){ a=j; b=k;}
        void show_data( ){
          
            
            cout<<"a="<<a<<endl<<"b="<<b;
        }
        Complexmul add(Complexmul j){
             Complexmul k;
            k.a=a-j.a;
            k.b=a-j.b;
            return k;
        }

    
};
 

        
int main()
{
    Complex c1,c2,c3;
    c1.set_data(12,3);
    c2.set_data(12,3);
   c3= c1.add(c2);
    c3.show_data();

}