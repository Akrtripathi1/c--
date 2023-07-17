#include<iostream>
using namespace std;
bool is_fib(int num)
{
    int a=-1,b=1,c=0;
    while(c<num)
    {
        c=a+b;
        if(c==num)
        return true;
        a=b;
        b=c;

    }
    return false;
}
int main()
{
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<endl<<is_fib(k);
  
}