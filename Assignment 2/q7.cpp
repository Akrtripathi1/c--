/*wrie a function to add two or three numbers using default arguments */
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
   return a+b+c;
}
int main()
{
    int k,l,m;
    cout<<"Enter numbers you want to add ";
    cin>>k>>l;
    cout<<endl<<"sum is :"<<add(k,l,m)<<endl;
}