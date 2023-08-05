#include<iostream>
using namespace std;
class akr{
        int j,k;
        public:
        void setdata(int a, int b)
        {
            j=a; k=b;
        }
        void showdata()
        {
            cout<<"a="<<j<<endl<<"b="<<k;
        }

};


int main()
{
    akr c1;
    c1.setdata(2,3);
     c1.showdata();
}