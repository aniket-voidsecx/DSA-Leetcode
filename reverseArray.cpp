// #1.Raverse an Array

// M1: With extra space

#include<iostream>
using namespace std;

    void reverseArray(int *arr,int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<",";
        }
        cout<<endl;
    }

    int main(){
        int arr[]={5,4,3,9,2};
        int n=sizeof(arr)/sizeof(int);

        int copyArr[n];
        for(int i=0;i<n; i++){
            int j=n-i-1;
            copyArr[i]=arr[j];
        }
        for(int i=0; i<1; i++){
            arr[i]=copyArr[i];
        }  
        reverseArray(arr,n);
        return 0;
    }
