#include<iostream>
#include<vector>
using namespace std;
    
    void clearRange(int num,int i, int j){
        int a=(~0)<<(j+1);
        int b= (1<<i)-1;
        int mask=a|b;
        num=num & mask;
        cout<<num<<endl;
        
    }

    int main(){
             clearRange(15,2,3);
        
        return 0;
    }