#include<stdio.h>  

double f(double a)    
{    
    if(a==1)    
        return 2;    
    else    
        return (2*f(a-1))/(1+2*f(a-1));    
}    
  
int main(){  
    double num;  
    while(scanf("%lf",&num)!=EOF){  
        printf("%.5f\n",f(num));  
    }  
}  