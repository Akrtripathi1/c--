#include<iostream>
using namespace std;
class Date{
private:
    int date ;
    int month;
    int year;
public:
    Date(){}
    Date(int a, int b, int c){date =a;
    month =b;
    year=c; }
    int get_date(){return date;}
    int get_month(){return  month;}
    int get_year(){return year;}

void display_Date(){cout<<""<<date<<"/"<<month<<"/"<<year<<"";}
};