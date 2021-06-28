#include<iostream>  
using namespace std;

int main(){  
    int a, b, t;  
    while(cin>>a>>b){  
        if(b>a){  
            int tmp = a;  
            a=b;  
            b=tmp;  
        }  
        while(a>b){  
            while(b!=0){  
                t = b;  
                b = a%b;  
                a = t;  
            }  
            cout<<a<<endl;  
            break;  
        }  
    }  
    return 0;  
}  