#include<iostream>           
using namespace std;
           
int main(){           
    int input;           
    while(cin>>input){       
        cout.precision(1);    
        cout<<fixed<<input*1.6<<endl;           
    }         
    return 0;         
} 