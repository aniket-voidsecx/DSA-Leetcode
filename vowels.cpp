#include<iostream>
#include<string>
using namespace std;
    void vowelCount(string str){
       int vowCount=0;
       for(int i=0; i<str.length(); i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
            str[i]=='o' || str[i]=='u'){
                vowCount++;
            }
       }
    cout<<vowCount<<endl;
    }
    int main(){
        string str;
        cout<<"Enter Something:\n";
        getline(cin,str);
        vowelCount(str);
        return 0;
    }