#include<iostream>    
#include<math.h>    
using namespace std ;
    
int main(){    
    int x, y;    
    while(cin>>x>>y){    
        if(pow(x,2)+pow(y,2)<=20000)    cout<<"inside"<<endl;    
        else    cout<<"outside"<<endl;    
    }    
    return 0;    
}  