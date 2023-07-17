#include<iostream>
using namespace std;
void validate(int n)
{
  if(n%2==0)
  cout<<"Number ois not prime ";
  else
  cout<<"Number is prime";
}
int main()
{
  int a;
   cin>>a;
   validate(a);
   return 0;
}