#include<iostream>
using namespace std;
int lcm_three (int a,int b,int c )
{
    int lcm ,d;
  if(a>b&&a>c)
  {
    d=a;
  }
    else if(b>c&&b>a){
       d=b;
         }
         else
         d=c;
         for(lcm=d;lcm<=a*b*c;lcm++)
         {
            if(lcm%a==0&&lcm%b==0&&lcm%c==0)
                 return lcm;
            
        
         }
        
  
}
int main()
{
    int s,d,e,j;
    cout<<"enter three number you want to find lcm of :";
    cin>>s>>d>>e;
    j=lcm_three(s,d,e);
    cout<<"L.C.M. is "<<j;
}