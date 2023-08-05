#include<iostream>
using namespace std;
class month_date_year{

int a,b,c;
public:
void set_data(int j,int k,int l){a=j;b=k;c=l;}

void show_data(){
    cout<<"d-"<<a<<"m-"<<b<<"y-"<<c ;
}


};
int main()
{
    month_date_year a;
    int k,l,m;
    cout<<"Enter date day time";
    cin>>k>>l>>m;
    a.set_data(k,l,m);
    a.show_data();
    

}