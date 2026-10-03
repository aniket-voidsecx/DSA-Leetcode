// // #1.Raverse an Array

// // M1: With extra space

// #include<iostream>
// using namespace std;

//     void reverseArray(int *arr,int n){
//         for(int i=0; i<n; i++){
//             cout<<arr[i]<<",";
//         }
//         cout<<endl;
//     }

//     int main(){
//         int arr[]={5,4,3,9,2};
//         int n=sizeof(arr)/sizeof(int);

//         int copyArr[n];
//         for(int i=0;i<n; i++){
//             int j=n-i-1;
//             copyArr[i]=arr[j];
//         }
//         for(int i=0; i<1; i++){
//             arr[i]=copyArr[i];
//         }  
//         reverseArray(arr,n);
//         return 0;
//     }

    // #M2 Without extra space (Two Pointer Approach)

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
        int start=0,end=n-1;
        while(start<end){
            int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end--;
        }        
        reverseArray(arr,n);
        return 0;
    }


