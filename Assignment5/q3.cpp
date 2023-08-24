#include<iostream>
using namespace std;
class time{
    int hr,min,sec;
    public :
    void setData(int x,int y, int z){hr=x;min=y;sec=z;}
    void showData(){cout<<hr<<":"<<min<<":"<<sec;}
    void normalize(int hr, int min,int sec){
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
    }
  time add(time t){
    time temp;
    temp.sec=sec+t.sec;
    temp.min=min+t.min;
    temp.hr=hr+t.hr;
    return temp;

  }
   bool time_greater(time t){
       if(hr>t.hr){
        return true;
       }
       else if(hr<t.hr) 
       return false;
       else if(min>t.min) 
       return true;
       else if(min<t.min) 
       return false;
      
       else if(sec>t.sec) 
       return false;
       else 
       return false;


   }



};