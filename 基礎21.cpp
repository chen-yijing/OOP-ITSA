#include<iostream>  
#include<string.h>
using namespace std; 

int main(){  
    float a,max = 0, min;  
    for(int i=0;i<10;i++){  
        cin>>a;  
          
        if(a>max)   max = a;  
        if(i==0){  
            min = a;  
            continue;  
        }      
        if(a<min)   min = a;  
    }  
            cout.precision(2);    

    cout<<"maximum:"<<fixed <<max<<endl<<"minimum:"<<min<<endl;  
}  