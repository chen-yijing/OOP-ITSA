#include<stdio.h>  

double f(double a)    
{    
    if(a/2<1)    
        return 0;    
    else    
        return a+f(a/2);    
}    
  
int main(){  
    double h;  
    while(scanf("%lf",&h)!=EOF){  
        printf("%.2f\n",((h+f(h))*1000+0.5)/1000);  
    }    
} 