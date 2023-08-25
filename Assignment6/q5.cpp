#include<iostream>
using namespace std;
class complex{
    private:
        int a;
        int b;

    public:
        complex(){a=0;b=0;}
        complex(int c, int d){a=c; b=d;}
        int get_(){return a;}
        int get_b()
            {return b;}
        
             
        
};
complex sset_data(int j,int k ){
               complex t(j,k);
               
              return t;
                
        }
void display_data(complex tr){cout<<"\n"<<tr.get_()<<" " <<tr.get_b()<<"";}
int main()
{
    complex c[5];
       c[0]= sset_data(2,3);
       c[1]= sset_data(12,13);
       c[2]= sset_data(21,33);
       c[3]= sset_data(42,31);
       c[4]= sset_data(28,43);
        for(int i=0;i<5;i++){
            display_data(c[i]);
        }
        

}
