#include<iostream>
using namespace std;
class tim{
    int hour;
    int mins;
    int second;
    public:
    void set_data(int a,int b,int c){hour=a; mins=b; second=c;}
    void show_data(){cout<<hour<<":"<<mins<<":"<<second;}


};
int main()
{
   
    tim c1;
    int a,b,c;
    cin>>a>>b>>c;
    c1.set_data(a,b,c);
    c1.show_data();

    
}