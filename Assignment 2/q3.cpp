/*Define function to find power of x raised to y*/
#include<iostream>
using namespace std;
double power(double a,double b)
{
   
    
        if(b>0)
          return a*power(a,b-1);
          else if(b<0)
          return 1/a*power(a,b+1);
          else 
          return 1;
    
    
}
int main()
{
    double k,n,l;
    cin>>l>>n;
    k=power(l,n);
   cout<<k;
}
