#include<iostream>
using namespace std;
void sorting_array(int a[10],bool g)
{
   int i,j,k=0,l,m,n;
   if(g==1)
   {
   for(i=0;i<10;i++)
   {
  
    for(j=i+1;j<10;j++)
    {
          if(a[i]>a[j])
          {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
           
          }
    
    }
   
   }
   for(m=0;m<10;m++)
   {
    cout<<endl <<a[m];
   }
   }
   else
   {
        for(i=0;i<10;i++)
    {
            for(j=i+1;j<10;j++)
            {
                    if(a[i]<a[j])
                    {            
                    l=a[i];
                    a[i]=a[j];
                    a[j]=l;
                    }

            }
       
        }
        for(m=0;m<10;m++)
   {
    cout<<endl <<a[m];
   }
    }
}

int main()
{
    int j[10]={12,14,13,11,10,16,9,7,2};
    bool k;
        
      cin>>k;
      sorting_array(j,k);
}