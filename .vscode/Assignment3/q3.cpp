#include<iostream>
using namespace std;
void array_clockwise(int b[5], bool k, int n)
{
    int i,j,l;
    if(k==1)
    {
        for(i=0;i<=n;i++)
        {
        l=b[4];
        for(j=3;j>=0;j--)
        {

            b[j+1]=b[j];
            
        }
        b[0]=l;
        }
        for(i=0;i<5;i++)
        cout<<endl<<b[i];
        
    }
    else
     {
        for(i=0;i<=n;i++)
        {
        l=b[0];
        for(j=1;j<=3;j++)
        {

            b[j]=b[j-1];
            
        }
        b[4]=l;
        }
        for(i=0;i<5;i++)
        cout<<endl<<b[i];
        
    }
}
int main()
{
    int a[5]={10,9,8,7,6},o;
    bool g;
    cin>>o>>g;
    array_clockwise(a,g,o);
    return 0;
}