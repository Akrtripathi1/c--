#include<iostream>
using namespace std;
 int hcf( int a, int b)
 {
    int hcf;
    for(hcf=a<b?a:b;hcf>=1;hcf--)
    {
        if(a%hcf==0&&b%hcf==0)
        {
            break;
        }
    }
    return hcf;
 }

 int main()
 {
    int k,l,j;
    cout<<"Enter numbers ";
    cin>>k>>l;
   
    cout<<hcf(k,l);
 }