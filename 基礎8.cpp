#include<iostream>  
using namespace std;

int main(){  
    int input,check;  
    while(cin>>input){  
        check = 0;  
        for(int i=2;i<=input/2;i++){  
            if(input%i==0){  
                cout<<"NO"<<endl;   check=1;  break;  
            }  
        }  
        if(check==0)    cout<<"YES"<<endl;  
    }  
}  