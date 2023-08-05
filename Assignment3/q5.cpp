#include<iostream>
using namespace std;

void prime_factors(int a){
    int  count[5];
    int i=2,g=0;
    while(i<=9,g<5){
        if(a%i==0&&a>0){
            a=a/i;
            count[g]=i;
            g++;
        }
       else
        i++;
        
    }
    for(g=0;g<5;g++)
   cout<<count[g];
    
 
}
int main()
{
    int k;
    cout<<"Enter number";
    cin>>k;
  
    prime_factors(k);
        
     
}