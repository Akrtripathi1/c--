#include<iostream>
#include<string.h>
using namespace std;
class book{
    private:
        bool booked;
       char title[10];
       int price;
    public :
         book(bool a, char b[], int c){
            booked=a;
            strcpy(title,b);
            price =c;
         }
       
};
