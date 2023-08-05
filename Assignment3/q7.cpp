#include<iostream>
using namespace std;
int volume(int l,int b,int h){
    int k= l*b*h;
return k;
}
int volume(int r){
    int k= 4/3*(3.14*r*r*r);
return k;
}
int volume(int r,int h){
    int k= 3.14*r*(h/3);
    return k;
}