#include<iostream>
#include<stdio.h>
using namespace std;
int *merge(int a[],int size1,int  b[],int size2){
    int *c;
    int i,k,l,j;
    c=(int*)calloc(size1+size2,sizeof(int));
    for(i=0,l=0,j=0,k=0;i<size1&&j<size2;k++)
    {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;

            }
    }
            while(i<size1){
                c[k]=a[i];
                i++;
                k++;
            }
            while(j<size2){
                c[k]=b[j];
                i++;
                j++;
            }
    return c;
}
int main()
{
   int c[]={4,5,7,9,10};
      int d[]={3,6,8,11,12};
      int *p,i;
      p=merge(c,5,d,5);
      for(i=0;i<10;i++)
      {
        cout<<p[i];
      }
}