#include<iostream>
using namespace std;
    void print(int mat[][3],int n,int m,int key){
        int coutOf7=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==key){
                    coutOf7++;
                }
            }
        }
        cout<<"Number of all 7's is ="<<coutOf7<<endl;
    }
    int main(){
        int matrix[2][3]={{4,7,8},
                    {8,8,7}};
        print(matrix,2,3,7);
        return 0;
    }