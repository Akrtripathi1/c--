#include<iostream>
using namespace std;
class student{
    
    private: 
        int roll_no;
        int right ;
        int wrong ;
        int score;
        int net_score;
    public:
            void setrollno(int a){roll_no=a;}
            void setright(int b){right=b;}
            void setwrong(int c){ wrong=c;}
            void setscore(int d){net_score=d;}
            static int right_weightage , wrong_weightage;

            int getwright(){return roll_no ;}
            int getrollno(){return right ;}
            int getwrong(){return wrong ;}
            int getscore(){return net_score ;}
                static void set(int k){right_weightage=k;}
                static void  set_wrong_weightage(int e){wrong_weightage=e;}
                static int get_wrong_weightage(){return wrong_weightage;}
                static int get_right_weightage(){return right_weightage;}


};
int student::right_weightage=3;
int student::wrong_weightage=1;
void set_result(student t,int a,int b,int c){
    t.setrollno(a);
    t.setright(b);
    t.setwrong(c);
    t.setscore(b*t.get_right_weightage()-c*t.get_wrong_weightage());
}
void display_result(student  t){
   cout<<"\n"<<t.getrollno()<<" "<<t.getwright()<<" " <<t.getwrong()<<" "<<t.getscore();
}
void sort_by_netscore(student tr[],int size){
      int r ,i;
      student temp;
      for(r=0;r<size-1;r++){
        for(i=0;i<size-r-1;i++){
            if(tr[i].getscore()>tr[i+1].getscore())
                 {
                    temp=tr[i];
                    tr[i]=tr[i+1];
                    tr[i+1]=temp;
                 }
        }
      }
}
int main ()
{

    student test[5];
    set_result(test[0],1,40,20);
    set_result(test[1],2,80,10);
    set_result(test[2],3,100,0);
    set_result(test[3],4,90,6);
    set_result(test[4],4,60,25);
    sort_by_netscore(test,5);
    for(int i=0;i<5;i++){
        display_result(test[i]);
    }
cout<<endl;
return 0;



}