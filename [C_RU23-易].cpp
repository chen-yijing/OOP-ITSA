#include<stdio.h>  

double f(double a)    
{    
    if(a==1)    
        return 1;    
    else    
        return (f(a-1)+2)/2;    
}    
  
int main(){  
    double num;  
    while(scanf("%lf",&num)!=EOF){  
        printf("%.5f\n",(f(num)*1000000+0.5)/1000000);  
    }  
}  