#include<iostream>
using namespace std;
class matrix{
    private: 
        int A[3][3];
    public :
        void setmatrix(int a[][3])
        {
            for(int i =0;i<3;i++){
                for(int j=0;j<3;j++){
                    a[i][j]=a[i][j];

                }
            }
        }
        void print_matrix(){
                for(int i=0;i<3;i++ ){
                    for(int j=0;j<3;j++){
                        cout<<A[i][j]<<" ";
                        cout<<endl;
                    }
                }
        }
        matrix add(matrix c){
          matrix  temp;
            for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        temp.A[i][j]=A[i][j]+c.A[i][j];
                    }
            }
            return temp;
        }
        matrix sub(matrix c){
          matrix  temp;
            for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        temp.A[i][j]=A[i][j]-c.A[i][j];
                    }
            }
            return temp;
        }
        matrix mul(matrix c){
          matrix  temp;
          int s;
            for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        for(int k=0,s=0;k<3;k++)
                        {
                            s=s+A[i][k]*c.A[k][j];
                        }
                        temp.A[i][j]=s;
                    }
            }
            return temp;
        }
        matrix transpose(matrix c){
          matrix  temp;
            for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                    c.A[j][i]=A[i][j];
                    }
            }
            return temp;
        }
        bool is_sinngular(){
             int d;
            d=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
            return d==0;
        }
};