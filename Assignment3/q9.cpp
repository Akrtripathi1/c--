#include<iostream>
using namespace std;
void swap_array(int a[2],int b[2]){
    int temp=0;
    for(int i=0;i<2;i++)
    {
       temp=a[i];
        a[i]=b[i];
        b[i]=temp;
        
        
    }
    

    for(int i=0;i<2;i++)
    cout<<a[i];
    for(int i=0;i<2;i++)
    cout<<b[i];
  
    

}
int main()
{
    int k[2],g[2];
    for(int o=0;o<2;o++)
    {
        cin>>k[o]>>g[o];
    }
    swap_array(k,g);
}