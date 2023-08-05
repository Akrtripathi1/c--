//1.
// #include<iostream>
// using namespace std;
// class date{
//      int a,b,c;
//      public:
//      void set_data(int j ,int k, int l){
//         a=j; b=k; c=l;
//      }
//      void show_data(){ cout<<a<<"-"<<b<<"-"<<c;}
// };

// int main(){
//     date c1;
//     c1.set_data(12,2,23);
//     c1.show_data();
// }
//2.
#include<iostream>

using namespace std;
class month{
     int i,j;
     char f[5];
     public:
     void set_data(int j ,char k[5] , int l){
        i=j;  j=l;int i;
        for( i=0;i<5;i++)
        {
            f[i]=k[i];
        }
       
     }
     void show_data(){ cout<<i<<"-"<<f<<"-"<<j;}
};

int main(){
    month c1;
    char k[]="dec";
    c1.set_data(12,k,23);
    c1.show_data();
}