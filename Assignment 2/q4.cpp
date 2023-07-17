/*print pascal triangle till n no line*/
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    return 1;
    return n*factorial(n-1);

}
int combi(int n,int r)
{
   return factorial(n)/factorial(n-r)/factorial(r);
}
void print_pascal(int lines)
{
  int i,j,n,c,r,flag =1;
  for(i=0;i<=lines;i++)
  {
    n=i-1;
    r=0;
    flag=1;
    for(j=1;j<=2*lines-1;j++)
    {
        if(j>=lines+1-i && j<=lines-1+i)
        {
        if(flag)
        cout<<combi(n,r++);
        else
        cout<<" ";
        flag=1-flag;
        }
        else
        cout<<" ";
    }
    cout<<endl;
  }
}
int main()
{
    print_pascal(6);
    cout<<endl;
}
