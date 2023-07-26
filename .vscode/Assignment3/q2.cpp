#include<iostream>
#include<string.h>
using namespace std;
void sort_string(char qtr[20],char mtr[20],bool g)
{
      if(g==1)
      {
       if( strcmp(qtr,mtr)==-1)
        {
             
            cout<<qtr<<mtr;
        }
        
      }
      else
      {
        if( strcmp(qtr,mtr)==1)
        {
            
            cout<<mtr<<qtr;
        }
        
      }
     
} 
int main(){
    char str[20]={"Akash"};
   char ktr[20]= {"Prakash"};
     bool k;
     cin>>k;
     sort_string(str,ktr,k);
}