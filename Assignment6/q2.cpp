#include<iostream>
#include<string.h>
using namespace std;
class student_details{
    private: 
        int cust_id;
        char name[10];
        char email[16];
        int mobile;
    public:
        student_details(){}
        student_details(int a,char b[],char c[],int d){
            cust_id=a;
            strcpy(name,b);
            strcpy(email,c);
            mobile=d;

        }


};
int main(){
    student_details t;
}