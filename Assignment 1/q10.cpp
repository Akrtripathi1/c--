#include<iostream>
using namespace std;
int main()
{
    int a[10],c=0;
    for(int i =0;i<10;i++)
    {
        cin>>a[i];
        c=c+a[i];
    }
    cout<<"sum of array size 10 is "<<c;
}